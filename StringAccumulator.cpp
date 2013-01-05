//
// HTMLZAP --- Simple HTML parsing ActiveX control (ATL)
//
// Copyright (C) 1998 Michael Newcomb
//
// Commercial reuse prohibited.
//
// StringAccumulator.cpp : Implementation of CStringAccumulator
#include "stdafx.h"
#include "Htmlzap.h"
#include "StringAccumulator.h"

/////////////////////////////////////////////////////////////////////////////
// CStringAccumulator

STDMETHODIMP CStringAccumulator::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IStringAccumulator,
	};
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		if (::InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

HRESULT CStringAccumulator::OnDraw(ATL_DRAWINFO& di)
{
#if SKIP
	RECT& rc = *(RECT*)di.prcBounds;
	Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
	DrawText(di.hdcDraw, _T("ATL 2.0"), -1, &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
#endif

	if (zPicture == NULL)
		zPicture = (HBITMAP) LoadImage(_Module.GetModuleInstance(), (LPCTSTR) IDB_SABUTN,
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



//
// StringList class
//

StringList::StringList()		// Create with no string
{

	string = NULL;
	len = 0;
	next = NULL;

}


StringList::StringList(BSTR inpstr)		// Create from BSTR
{

	string = SysAllocString(inpstr);

	len = (string != NULL) ? SysStringLen(string) : 0;

	next = NULL;

}


//
// Create out of TWO strings
//

StringList::StringList(BSTR inp1, BSTR inp2)		// Create from BSTRs
{

	int l1 = SysStringLen(inp1);
	int l2 = SysStringLen(inp2);

	string = SysAllocStringLen(inp1, l1 + l2);

	len = (string != NULL) ? l1 + l2 : 0;

	next = NULL;

	if (string != NULL) {
		OLECHAR *d = string + l1;		// Point past end of string 1
		OLECHAR *s = inp2;

		while (l2-- > 0)				// Do the append
			*d++ = *s++;
		}

}


StringList::~StringList()
{

	if (string != NULL)
		SysFreeString(string);

}


//
// Deletes everything BELOW where we are...
//
void StringList::ClearChain()
{
	StringList *here, *np;

for (here=next; here != NULL; here=np) {
	np = here->next;
	delete here;
	}

}


//
// Reset the control
//


STDMETHODIMP CStringAccumulator::Reset()
{

	if (top != NULL) 
	{
		top->ClearChain();
		delete top;
		top = NULL;
	}

	eol = NULL;			// End of list is always NULL

return S_OK;
}


//
// Add a string
//

STDMETHODIMP CStringAccumulator::Add(BSTR inps)
{

	StringList *sp = new StringList(inps);

	if (top == NULL)
		top = eol = sp;
	else 
	{
		eol->next = sp;
		eol = sp;
	}


return S_OK;
}


//
// MakeString creates a string for return to VB
//

static BSTR MakeString(
const char *cp,
int slen)
{
	int len;
	BSTR rc;

len = MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, cp, slen, NULL, 0);	// Length of converted string
rc = SysAllocStringByteLen(NULL, len * sizeof(WCHAR));	// Make space
MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, cp, slen, rc, len);	// Do the conversion

return(rc);
}


//
// Add a string with a CR
//

STDMETHODIMP CStringAccumulator::AddCR(BSTR inps)
{
	static BSTR crlf = NULL;

	if (crlf == NULL)
		crlf = MakeString("\r\n", 2);

	StringList *sp = new StringList(inps, crlf);

	if (top == NULL)
		top = eol = sp;
	else 
	{
		eol->next = sp;
		eol = sp;
	}

return S_OK;
}


//
// Retrieve the string
//

STDMETHODIMP CStringAccumulator::get_String(BSTR * pVal)
{

	if (top == NULL) 		// Empty string
	{
		*pVal = SysAllocStringByteLen("", 0);
		return S_OK;
	}

	int lacc = 0;
	StringList *sl;

	for (sl=top; sl != NULL; sl=sl->next)
		lacc += sl->len;		// Accumulate the whole length

	*pVal = SysAllocStringLen(NULL, lacc);		// Make room for the whole string

	OLECHAR *s;
	OLECHAR *d = *pVal;
	int l;

	for (sl=top; sl != NULL; sl=sl->next) 
	{
		s = sl->string;			// Point to the string
		for (l=sl->len; l > 0; l--)
			*d++ = *s++;
	}


return S_OK;
}


//
// Set the string to a particular value
//

STDMETHODIMP CStringAccumulator::put_String(BSTR newVal)
{

	Reset();

	Add(newVal);

return S_OK;
}


//
// Get the string's length
//

STDMETHODIMP CStringAccumulator::get_Length(long * pVal)
{
	int lacc = 0;
	StringList *sl;

	for (sl=top; sl != NULL; sl=sl->next)
		lacc += sl->len;		// Accumulate the whole length

	*pVal = lacc;

return S_OK;
}


//
// Is the accumulator empty?
//
 
STDMETHODIMP CStringAccumulator::get_IsEmpty(BOOL * pVal)
{

	if (top == NULL)			// Table is empty
		*pVal = TRUE;
	else
	{
		long l;

		get_Length(&l);			// Make sure it contains more than an empty string

		*pVal = (l == 0);
	}

return S_OK;
}
