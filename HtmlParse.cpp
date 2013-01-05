//
// HTMLZAP --- Simple HTML parsing ActiveX control (ATL)
//
// Copyright (C) 1998 Michael Newcomb
//
// Commercial reuse prohibited.
//
// HtmlParse.cpp : Implementation of CHtmlParse
#include "stdafx.h"
#include "Htmlzap.h"
#include "HtmlParse.h"
#include "shlwapi.h"

#if defined(_DEBUG)			// Include for sprintf during debugging
#include "stdio.h"
#include "ctype.h"
#endif

#define EOS '\0'

#define VBTRUE (-1)
#define VBFALSE 0

#define isspace_ptr(P) isspace(*((unsigned char *) (P)))


//
// memeq compares two strings of specified lengths
//

static bool memeq(const char *s1, const char *s2, int len)
{

while (len-- > 0)
	if (*s1++ != *s2++)
		return(false);

return(true);
}


//
// MakeString creates a string for return to VB
//

BSTR CHtmlParse::MakeString(
const char *cp,
int slen,
const char *label)
{
	int len;
	BSTR rc;

#if PDEBUG
	static int instanceCounter = 0;

	if (dfile == NULL)
	{
		if (dfname == NULL)
		{
			char wrk[64];

			sprintf(wrk, "h:\\hzdebug_%08lX.txt", ++instanceCounter);

			dfname = strdup(wrk);
		}

		dfile = fopen(dfname, "at");
	}

	fputs(label, dfile);
	fputs(": ", dfile);
	fwrite(cp, sizeof(char), slen, dfile);
	fputc('\n', dfile);
#endif

len = MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, cp, slen, NULL, 0);	// Length of converted string
rc = SysAllocStringByteLen(NULL, len * sizeof(WCHAR));	// Make space
MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, cp, slen, rc, len);	// Do the conversion

return(rc);
}


//
// GetString retrives an ANSI string from a UNICODE string
//
// Converts string ins to rc
//

static char *GetString(BSTR ins, char rc[], int slimit)
{

WideCharToMultiByte(CP_OEMCP, 0, ins, -1, rc, slimit, NULL, NULL);	// Do the conversion

return(rc);
}


//
// AppendString takes a UNICODE string and writes it to specific
//  point.  Returns the updated pointer
//

char *CHtmlParse::AppendString(BSTR ins, char *ap)
{

	int len = WideCharToMultiByte(CP_OEMCP, 0, ins, -1, NULL, 0, NULL, NULL);

	if (convbuf == NULL) {
		convhandle = LocalAlloc(LMEM_FIXED, (len > 1024) ? len : 1024);		// Alloc the buffer from scratch
		convbuf = (char *) LocalLock(convhandle);
		}
	else if ((unsigned int) len > LocalSize(convhandle)) {
		LocalUnlock(convhandle);
		convhandle = LocalReAlloc(convhandle, (len > 1024) ? len : 1024, LMEM_FIXED);
		convbuf = (char *) LocalLock(convhandle);
		}

	WideCharToMultiByte(CP_OEMCP, 0, ins, -1, convbuf, len, NULL, NULL);	// Do the conversion

	char *p = convbuf;

	while (*p != EOS)
		*ap++ = *p++;

return(ap);
}


//
// Return the Empty string
//

static BSTR EmptyString(void)
{

	return(SysAllocStringByteLen("", 0));

}


/////////////////////////////////////////////////////////////////////////////
// CHtmlParse


HRESULT CHtmlParse::OnDraw(ATL_DRAWINFO& di)
{
#if SKIP
	Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
	DrawText(di.hdcDraw, _T("ATL 2.0"), -1, &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
#endif

	if (zPicture == NULL)
		zPicture = (HBITMAP) LoadImage(_Module.GetModuleInstance(), (LPCTSTR) IDB_HZBUTN,
			IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);

	if (zPicture != NULL)
	{
		RECT& rc = *(RECT*)di.prcBounds;
		BITMAP bmp;

		GetObject(zPicture, sizeof(BITMAP), &bmp);
		HDC bithc = CreateCompatibleDC(NULL);
		SelectObject(bithc, zPicture);
		StretchBlt(di.hdcDraw,
			rc.left, rc.top,
			rc.right - rc.left, rc.bottom - rc.top,
			bithc,
			0, 0,
			bmp.bmWidth, bmp.bmHeight,
			SRCCOPY);
		DeleteDC(bithc);
	}

return S_OK;
}



HRESULT STDMETHODCALLTYPE CHtmlParse::InterfaceSupportsErrorInfo(REFIID riid)
{
    static const IID* arr[] = 
    {
        &IID_IHtmlParse,
    };
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if (::InlineIsEqualGUID(*arr[i],riid))
            return S_OK;
    }
    return S_FALSE;
}


//
// Read parameter values
//

STDMETHODIMP CHtmlParse::get_PName(short pIndex, BSTR * pVal)
{

	if (pIndex < 0 || pIndex >= MAX_PARAMS)
		return(DISP_E_OVERFLOW);		// No such parameter

	SysFreeString(*pVal);

	*pVal = (TextMode || pIndex >= nParams) ? 
			EmptyString() :		// Send back the empty string
			SysAllocString(ParamTable[pIndex].pName);

return S_OK;
}



STDMETHODIMP CHtmlParse::get_PValue(short pIndex, BSTR * pVal)
{

	if (pIndex < 0 || pIndex >= MAX_PARAMS)
		return(DISP_E_OVERFLOW);		// No such parameter

	SysFreeString(*pVal);

	*pVal = (TextMode || pIndex >= nParams) ?
			EmptyString() :		// Send back the empty string
			SysAllocString(ParamTable[pIndex].pVal);

return S_OK;
}


STDMETHODIMP CHtmlParse::get_MaxParam(short * pVal)
{

	*pVal = nParams;			// Store the number of parameters

return S_OK;
}


//
// Read back the text
//

STDMETHODIMP CHtmlParse::get_Text(BSTR * pVal)
{

if (*pVal != NULL)
	SysFreeString(*pVal);

*pVal = (!TextMode && SysStringLen(Tag) == 6 &&
		 !memeq((const char *) Tag, 
		 (const char *) L"script", 6 * sizeof(WCHAR))) 
	? EmptyString() :		// Send back the empty string
	  SysAllocString(Text);		// Copy the Text

return S_OK;
}


//
// Is this the end of file
//

STDMETHODIMP CHtmlParse::get_EOF(BOOL * pVal)
{

	*pVal = (posn >= eob || htbuf == NULL) ? VBTRUE : VBFALSE;		// End of File

return S_OK;
}


//
// Compress Whitespace?
//

STDMETHODIMP CHtmlParse::get_CompressWS(BOOL * pVal)
{

	*pVal = (cWS) ? VBTRUE : VBFALSE;		// White-space compression

return S_OK;
}



STDMETHODIMP CHtmlParse::put_CompressWS(BOOL newVal)
{

	cWS = (newVal != 0);

return S_OK;
}


//
// Is this a tag
//

STDMETHODIMP CHtmlParse::get_IsTag(BOOL * pVal)
{

	*pVal = (TextMode) ? VBFALSE : VBTRUE;				// IsTag = Not text mode

return S_OK;
}


//
// Get the name of the tag
//

STDMETHODIMP CHtmlParse::get_TagName(BSTR * pVal)
{

	SysFreeString(*pVal);

	*pVal = (TextMode) ? EmptyString() : SysAllocString(Tag);

return S_OK;
}


//
// Where are we in the buffer
//

STDMETHODIMP CHtmlParse::get_Position(long * pVal)
{

	if (htbuf == NULL)
		*pVal = -2;				// No buffer
	else if (posn >= eob)
		*pVal = -1;				// End of file
	else
		*pVal = posn - htbuf;	// Current position in file

return S_OK;
}



STDMETHODIMP CHtmlParse::put_Position(long newVal)
{

	if (htbuf != NULL && newVal >= 0 && (htbuf + newVal) < eob)
		posn = htbuf + newVal;			// OK to set position
	else
		return(DISP_E_OVERFLOW);		// Not legal

return S_OK;
}



//
// Read the header level
//

STDMETHODIMP CHtmlParse::get_HdrLevel(short * pVal)
{

	*pVal = HeaderLevel;				// Return the current header level

return S_OK;
}



//
// Set the control back to normal
//

STDMETHODIMP CHtmlParse::Reset()
{
	struct ParamTable_struct *ps;

	if (htbuf != NULL) {				// Buffer is allocated
		if (mapdfile) {
			UnmapViewOfFile(htbuf);			// Do the cleanup
			CloseHandle(fmap);
			CloseHandle(fhd);
			htbuf = NULL;
			fmap = fhd = NULL;
			mapdfile = false;
			}
		else {
			LocalUnlock(hthandle);
			LocalFree(hthandle);
			htbuf = NULL;
			}
		}

	if (Tag != NULL) {
		SysFreeString(Tag);
		Tag = NULL;
		}

	if (Text != NULL) {
		SysFreeString(Text);
		Text = NULL;
		}

	if (orig != NULL) {
		SysFreeString(orig);
		orig = NULL;
		}

	ps = ParamTable;

	for (int i=MAX_PARAMS; i>0; i--, ps++) {	// Clear all the strings in Param table
		if (ps->pName != NULL)
			SysFreeString(ps->pName);
		if (ps->pVal != NULL)
			SysFreeString(ps->pVal);
		}

	ZeroMemory(ParamTable, sizeof(ParamTable));	// Waste the pointers

	HeaderLevel = 0;

return S_OK;
}


//
// Get the Parameter value by name
//

STDMETHODIMP CHtmlParse::get_Param(BSTR pName, BSTR * pVal)
{

	SysFreeString(*pVal);

	if (SysStringByteLen(pName) == 0 || TextMode) {			// We are in text mode
		*pVal = EmptyString();		// Send back the empty string
		return(S_OK);
		}

	PTable *ps = FindByName(pName);

	*pVal = (ps != NULL) ? SysAllocString(ps->pVal) : EmptyString();		

return S_OK;
}




//
// Set a parameter by name
//

STDMETHODIMP CHtmlParse::put_Param(BSTR pName, BSTR newVal)
{

	if (SysStringByteLen(pName) == 0 || TextMode)			// We are in text mode
		return(S_OK);

	PTable *ps = FindByName(pName);	// Point to parameter table

	if (ps == NULL)				// Nothing found, add to end of list
	{
		if (nParams >= (MAX_PARAMS - 1))
			return(CTL_E_OVERFLOW);			// No more room for new parameters

		ps = ParamTable + nParams;	// Not found, need to add
	}

	if (ps->pVal != NULL)
		SysFreeString(ps->pVal);		// Free the old string

	ps->pVal = SysAllocString(newVal);	// Allocate the value

	if (ps->pName == NULL) 				// Got to allocate the name too
	{
		ps->pName = SysAllocString(pName);
		GetString(pName, ps->cName, MAX_CNLEN);
		nParams++;						// New parameter, have to increment
	}

	if (orig != NULL)			// Make it rebuild the string in ToString
	{
		SysFreeString(orig);
		orig = NULL;
	}

return S_OK;
}



//
// Load the string to parse
//

STDMETHODIMP CHtmlParse::Load(BSTR iString)
{
	BY_HANDLE_FILE_INFORMATION fi;
	char cbuf[384];

	char *fname = GetString(iString, cbuf, sizeof(cbuf));

	if ((fhd = CreateFile(fname, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, 0)) == INVALID_HANDLE_VALUE)
		return(Error(_T("Couldn't open file")));					// File couldn't be opened

	if (GetFileInformationByHandle(fhd, &fi) == FALSE) {	// Read information about file
		CloseHandle(fhd);			// Close the open file
		return(Error(_T("Could not read file information")));
		}

	if (fi.nFileSizeHigh != 0) {	// Can't process files greater than 4GB
		CloseHandle(fhd);
		return(Error(_T("Cannot handle files larger than 4GB")));
		}

	if ((fmap = CreateFileMapping(fhd, NULL, PAGE_READONLY, 0, 0, NULL)) == NULL) {
		CloseHandle(fhd);			// Close the open file
		return(Error(_T("Could not create file mapping")));
		}

	if ((htbuf = (char *) MapViewOfFile(fmap, FILE_MAP_READ, 0, 0, 0)) == NULL) {
		CloseHandle(fmap);			// Destroy the file mapping object
		CloseHandle(fhd);			// Close the open file
		return(Error(_T("Could not map view of file")));
		}

	mapdfile = true;

	posn = htbuf;
	eob = htbuf + fi.nFileSizeLow;					// Point to end of buffer

return(Next());
}


//
// Load from buffer (string, bytearray, etc.)
//

STDMETHODIMP CHtmlParse::LoadBuffer(VARIANT buf)
{
	long ub;
	byte *bp;

	if (buf.vt == (VT_ARRAY | VT_UI1))
	{
		if (SafeArrayGetDim(buf.parray) != 1)
			return(DISP_E_BADVARTYPE);		// Not the right number of dimensions...

		SafeArrayGetUBound(buf.parray, 1, &ub);		// Read array size

		if (mapdfile)
			Reset();						// Dump the memory file

		if (htbuf == NULL) {
			hthandle = LocalAlloc(LMEM_FIXED, ub);		// Alloc the buffer from scratch

			htbuf = (hthandle != NULL) ? (char *) LocalLock(hthandle) : NULL;
			}
		else if ((unsigned) ub > LocalSize(hthandle)) {			// Need more memory
			LocalUnlock(hthandle);
			hthandle = LocalReAlloc(hthandle, ub, LMEM_FIXED);

			htbuf = (hthandle != NULL) ? (char *) LocalLock(hthandle) : NULL;
			}

		if (htbuf == NULL)
			return(E_OUTOFMEMORY);		// Couldn't allocate memory

		SafeArrayAccessData(buf.parray, (void **) &bp);

		CopyMemory(htbuf, bp, ub);				// Copy the HTML data

		SafeArrayUnaccessData(buf.parray);
	}
	else if (buf.vt == VT_BSTR)			// Plain string
	{
		ub = WideCharToMultiByte(CP_ACP, 0, buf.bstrVal, -1, 
			NULL, 0, NULL, NULL);

		if (ub <= 0)
			return(E_INVALIDARG);			// Couldn't get length

		if (mapdfile)
			Reset();						// Dump the memory file

		if (htbuf == NULL) {
			hthandle = LocalAlloc(LMEM_FIXED, ub);		// Alloc the buffer from scratch

			htbuf = (hthandle != NULL) ? (char *) LocalLock(hthandle) : NULL;
			}
		else if ((unsigned) ub > LocalSize(hthandle)) {			// Need more memory
			LocalUnlock(hthandle);
			hthandle = LocalReAlloc(hthandle, ub, LMEM_FIXED);

			htbuf = (hthandle != NULL) ? (char *) LocalLock(hthandle) : NULL;
			}

		if (htbuf == NULL)
			return(E_OUTOFMEMORY);		// Couldn't allocate memory

		WideCharToMultiByte(CP_ACP, 0, buf.bstrVal, -1, 
			htbuf, ub, NULL, NULL);
	}
	else
		return(DISP_E_TYPEMISMATCH);		// Not a type we understand

	posn = htbuf;						// Point to start of buffer
	eob = htbuf + ub;					// Point to end of buffer

return(Next());						// Do the first parse
}



//
// Point to the start of the buffer
//

STDMETHODIMP CHtmlParse::Rewind()
{

	posn = htbuf;

return S_OK;
}



//
// Next tag / text
//

STDMETHODIMP CHtmlParse::Next()
{

	if (Tag != NULL) 					// Start by clearing everything
	{
		SysFreeString(Tag);
		Tag = NULL;
	}

	if (Text != NULL) 
	{
		SysFreeString(Text);
		Text = NULL;
	}

	if (orig != NULL) 
	{
		SysFreeString(orig);
		orig = NULL;
	}

	struct ParamTable_struct *ps = ParamTable;	// Point to parameter table

	for (int i=MAX_PARAMS; i>0; i--, ps++) 	// Clear all the strings in Param table
	{
		if (ps->pName != NULL)
			SysFreeString(ps->pName);
		if (ps->pVal != NULL)
			SysFreeString(ps->pVal);
	}

	ZeroMemory(ParamTable, sizeof(ParamTable));	// Waste the pointers

	HeaderLevel = 0;

	nParams = 0;

	TextMode = true;					// Default to text mode

	if (posn >= eob || htbuf == NULL)
		return(S_OK);					// Done, at EOF

	if (cWS)
		while (isspace_ptr(posn) && posn < eob)
			posn++;						// Jump over any leading whitespace

	if (posn >= eob)
		return(S_OK);					// Done, at EOF

	if (*posn != '<') 					// This is Text mode
	{
		char *scan = posn;				// Scan pointer
		int dws = 0;

		while (*scan != '<' && scan < eob) 
		{
			scan++;						// Start by running ahead to next delimiter
			if (isspace_ptr(scan) && isspace_ptr(scan-1))
				dws++;					// Count duplicate whitespace
		}

		if (!cWS) 						// Not converting whitespace, just send it back
		{
			Text = MakeString(posn, (scan > posn) ? (scan - posn) : 0, "Non-whitespace text");
			posn = scan;				// Point to next position
			return(S_OK);
		}

		int len = scan - posn - dws;	// This is the total size

		if (len <= 0) 
		{
			Text = EmptyString();	// Empty string
			posn = scan;				// Point to next position
			return(S_OK);
		}

		BSTR tstr = SysAllocStringByteLen(" ", len+2);		// Make room

		char *dp=(char *) tstr;

		for (char *cp=posn; cp < scan; cp++)		// Copy pointer
			if (isspace_ptr(cp)) 			// Copy, compressing out whitespace
			{
				if (!isspace_ptr(cp - 1))
					*dp++ = ' ';		// Change all whitespace to a single space
			}
			else
				*dp++ = *cp;

		*dp = EOS;						// End of string

		Text = MakeString((const char *) tstr, dp - (char *) tstr, "Whitespace text");
		SysFreeString(tstr);

		posn = scan;

		return(S_OK);
	}								// End of text mode if

	//
	// Now in tag-deciphering mode
	//

	TextMode = false;

	char tagbuf[64];					// Working areas
	char cpybuf[64];

	posn++;								// Skip the leading <

	char *startoftag = posn;			// Store the position of the tag's start

	if (*posn == '!')					// This is a comment
	{

		posn++;							// Skip leading !

		while ((*posn == '-' || isspace_ptr(posn)) && posn < eob)
			posn++;						// Skip any dashes or spaces

		char *scan = posn;
		int depth = 1;

		while (scan < eob)
		{
			if (*scan == '<')
				depth++;
			else if (*scan == '>' && --depth <= 0)
				break;

			scan++;
		}

		char *nxp = scan;				// Point to end of tag
		char c;

		while (scan > posn)
		{
			c = *(scan - 1);

			if (c == '-' || isspace((unsigned char) c))
				scan--;						// Backtrack over dashes and spaces
			else
				break;
		}

		Text = MakeString(posn, scan - posn, "Comment text");
		Tag = MakeString("!", 1, "Comment Tag");

		posn = nxp;

		orig = MakeString(startoftag, posn - startoftag, "Original tag");	// Copy the whole tag to memory

		if (posn < eob && *posn == '>')
			posn++;

	#if PDEBUG
		if (dfile != NULL)
		{
			fclose(dfile);
			dfile = NULL;
		}
	#endif

	return S_OK;
	}

	char *tbp = tagbuf;					// Point to the working buffer

	while (!isspace_ptr(posn) && *posn != '>' && posn < eob) 
	{
		*tbp++ = tolower(*posn);				// Copy the tag name into the buffer
		posn++;
	}

	*tbp = EOS;

	if ((tbp - tagbuf) == 2 && tagbuf[0] == 'h' && tagbuf[1] >= '1' && tagbuf[1] <= '9')
		HeaderLevel = tagbuf[1] - '0';	// Set the header level

	Tag = MakeString(tagbuf, tbp - tagbuf, "Tag name");	// Store the tag

	nParams = 0;						// Start with no params
	ps = ParamTable;

	while (isspace_ptr(posn) && posn < eob)
		posn++;							// Skim over any whitespace

	while (*posn != '>' && posn < eob) 	// Process the whole tag
	{
		tbp = cpybuf;

		while (!isspace_ptr(posn) && *posn != '>' && *posn != '=' && posn < eob) 
		{
			*tbp++ = tolower(*posn);			// Copy the parameter name
			posn++;
		}

		*tbp = EOS;						// End of the tag name

		ps->pName = MakeString(cpybuf, i = (tbp - cpybuf), "Param name");	// Set the param name

		if (i >= MAX_CNLEN)
			i = MAX_CNLEN;

		strncpy(ps->cName, cpybuf, i);
		ps->cName[i] = EOS;

		if (*posn != '=') 				// This is not an equals...
		{
			ps++->pVal = SysAllocStringByteLen("", 0);
			goto nextterm;
		}

		posn++;							// Skip the =

		if (*posn == '\"') 
		{
			char *scan = ++posn;
			while (*scan != '\"' && scan < eob)
				scan++;					// Hunt for last quote
			ps++->pVal = MakeString(posn, scan - posn, "Parameter value");
			posn = scan + 1;			// Skip the trailing quote
		}
		else if (*posn == '\'') 
		{
			char *scan = ++posn;
			while (*scan != '\'' && scan < eob)
				scan++;					// Hunt for last quote
			ps++->pVal = MakeString(posn, scan - posn, "Parameter value");
			posn = scan + 1;			// Skip the trailing quote
		}
		else 
		{
			char *scan = posn;
			while (!isspace_ptr(scan) && *scan != '>' && scan < eob)
				scan++;					// Hunt for last quote
			ps++->pVal = MakeString(posn, scan - posn, "Parameter value");
			posn = scan;				// Start the hunt over again
		}

	nextterm:

		if (nParams >= (MAX_PARAMS - 1))
			ps--;						// Keep overwriting the last param if too many
		else
			nParams++;

		while (isspace_ptr(posn) && posn < eob)
			posn++;						// Skip any whitespace

	}

	orig = MakeString(startoftag, posn - startoftag, "Original tag");	// Copy the whole tag to memory

	if (*posn == '>')					// Skip closing >
		posn++;

	//
	// Handle scripts...
	//

	if (memeq(tagbuf, "script", 6))
	{
		char *scan = posn, *cpy, *cdest;
		char cmpbuf[16];
		int i;

		do
		{
			while (*scan != '<' && scan < eob)
				scan++;						// Start looking for tag

			if (scan >= eob)
				break;

			cpy = scan;
			cdest = cmpbuf;
			i = 10;

			while (i-- > 0 && cpy < eob)
				*cdest++ = tolower(*cpy++);

			if (memeq(cmpbuf, "</script>", 9))
				break;
			else
				scan++;						// Don't keep scanning same tag

		} while (scan < eob);

		if (scan < eob)						// Got a script tag
		{
#if SKIP
			ps->pName = MakeString("script", 6, "Script Name");	// Set the param name
			ps++->pVal = MakeString(posn, scan - posn, "Script value");
			nParams++;
#endif
			Text = MakeString(posn, scan - posn, "Script");

//			posn = scan + 9;		// Point past script
			posn = scan;			// Point to "end script" tag
		}
	}								// "This is a script" if

	#if PDEBUG
		if (dfile != NULL)
		{
			fclose(dfile);
			dfile = NULL;
		}
	#endif

return S_OK;
}


//
// Convert the tag or text to a string
//

STDMETHODIMP CHtmlParse::get_ToString(BSTR * pVal)
{

	if (TextMode)
		return(get_Text(pVal));			// Use the normal text function

	if (pVal != NULL)
		SysFreeString(*pVal);			// Waste the old string

	if (orig != NULL) 					// The original string is still OK
	{
		*pVal = SysAllocString(orig);	// Send back a copy
		return(S_OK);
	}

	char asmbuf[1024];					// Assembly buffer
	char cbuf[256], *cp;				// Parameter value conversion buffer
	const bool quote = true;			// Let's always quote

	char *ap = asmbuf;					// Point to the assembly buffer

//	*ap++ = '<';						// Start tag

	ap = AppendString(Tag, ap);			// Append the tag

	bool isComment = !strcmp(asmbuf, "<!--");		// This is a comment

	struct ParamTable_struct *p = ParamTable;

	for (int pc=0; pc < nParams; pc++, p++) 
	{
		if (p->pName == NULL)			// This parameter has been deleted
			continue;

		*ap++ = ' ';

		ap = AppendString(p->pName, ap);		// Append the parameter name

		if (p->pVal != NULL) 			// There is an assigned value
		{
			*ap++ = '=';
			GetString(p->pVal, cbuf, sizeof(cbuf));		// Convert the string

#if SKIP
			quote = false;				// Don't quote the string...

			for (cp=cbuf; *cp != EOS; cp++)
				if (isspace_ptr(cp) || *cp == '>' || *cp == '<') {
					quote = true;
					break;				// This is a space or other delimiter
					}
#endif

			if (quote)
				*ap++ = '\"';			// Add a leading quote

			for (cp=cbuf; *cp != EOS; cp++)
				*ap++ = *cp;			// Append the value

			if (quote)
				*ap++ = '\"';			// Add the trailing quote
		}
	}

	if (isComment) 
	{
		strcpy(ap, " -->");
		ap += 4;
	}
	else 
	{
//		*ap++ = '>';
		*ap = EOS;
	}

	*pVal = MakeString(asmbuf, ap - asmbuf, "ToString");

return S_OK;
}



//
// Read how far we are into the file
//

STDMETHODIMP CHtmlParse::get_Percent(short * pVal)
{

	if (htbuf == NULL || eob == htbuf)
		*pVal = 0;
	else if (posn >= eob)
		*pVal = 100;
	else
		*pVal = (short) ((posn - htbuf) * 100L / (eob - htbuf));

return S_OK;
}


//
// Convenience access to the OS's URLCombine function
//

STDMETHODIMP CHtmlParse::URLCombine(BSTR baseURL, BSTR relativeURL, BOOL escapeChars, 
BSTR *combinedURL)
{
	WCHAR rbuf[512];

	DWORD rSize = sizeof(rbuf) / sizeof(WCHAR);

	HRESULT hr = UrlCombineW(baseURL, relativeURL, rbuf, &rSize,
		(escapeChars) ? URL_ESCAPE_UNSAFE : 0);

	if (FAILED(hr))
		return(hr);

	SysReAllocStringLen(combinedURL, rbuf, rSize);

	return S_OK;
}


//
// Find a parameter by its name -- Return Null for none
//

CHtmlParse::PTable * CHtmlParse::FindByName(BSTR pName)
{

	PTable *ps = ParamTable;	// Point to parameter table

#if SKIP
	for (int i=nParams; i>0; i--, ps++)
		if (ps->pName != NULL &&
			CompareStringW(LOCALE_USER_DEFAULT, NORM_IGNORECASE,
			 pName, -1, ps->pName, -1) == CSTR_EQUAL)
			return(ps);
#endif

	char cName[MAX_CNLEN + 2];
	GetString(pName, cName, MAX_CNLEN);
	cName[MAX_CNLEN] = EOS;

	for (int i=nParams; i>0; i--, ps++)
		if (ps->pName != NULL &&
			lstrcmpi(cName, ps->cName) == 0)
			return(ps);

return(NULL);
}



//
// Convenience call to URLCanonicalize in OS
//

STDMETHODIMP CHtmlParse::URLCanonicalize(BSTR rawURL, BOOL escapeChars, BSTR *canonURL)
{
	WCHAR rbuf[512];

	DWORD rSize = sizeof(rbuf) / sizeof(WCHAR);

	HRESULT hr = UrlCanonicalizeW(rawURL, rbuf, &rSize,
		(escapeChars) ? URL_ESCAPE_UNSAFE : 0);

	if (FAILED(hr))
		return(hr);

	SysReAllocStringLen(canonURL, rbuf, rSize);

	return S_OK;
}



//
// Remove a parameter from the tag
// 

STDMETHODIMP CHtmlParse::RemoveParam(VARIANT param)
{
	PTable *ps = NULL;

	if (param.vt == VT_BSTR)
		ps = FindByName(param.bstrVal);
	else if (param.vt == (VT_BSTR | VT_BYREF))
		ps = FindByName(*param.pbstrVal);
	else
	{
		CComVariant cv;

		HRESULT hr = cv.ChangeType(VT_I4, &param);

		if (FAILED(hr))
			return(hr);

		int pIndex = cv.iVal;

		if (pIndex < 0 || pIndex >= MAX_PARAMS)
			return(DISP_E_OVERFLOW);		// No such parameter

		if (pIndex < nParams)
			ps = ParamTable + pIndex;
	}

	if (ps != NULL && ps->pName != NULL)
	{
		SysFreeString(ps->pName);
		ps->pName = NULL;
	}

	if (orig != NULL)			// Make it rebuild the string in ToString
	{
		SysFreeString(orig);
		orig = NULL;
	}

return S_OK;
}
