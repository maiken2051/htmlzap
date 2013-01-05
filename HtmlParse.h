//
// HTMLZAP --- Simple HTML parsing ActiveX control (ATL)
//
// Copyright (C) 1998 Michael Newcomb
//
// Commercial reuse prohibited.
//
// HtmlParse.h : Declaration of the CHtmlParse

#ifndef __HTMLPARSE_H_
#define __HTMLPARSE_H_

#include "resource.h"       // main symbols

#if defined(_DEBUG)
#define PDEBUG		0		// Parsing debug flag
#include "stdio.h"
#include "stdlib.h"
#else
#define PDEBUG		0
#endif


/////////////////////////////////////////////////////////////////////////////
// CHtmlParse
class ATL_NO_VTABLE CHtmlParse : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CHtmlParse, &CLSID_HtmlParse>,
	public CComControl<CHtmlParse>,
	public IDispatchImpl<IHtmlParse, &IID_IHtmlParse, &LIBID_HTMLZAPLib>,
	public IProvideClassInfo2Impl<&CLSID_HtmlParse, NULL, &LIBID_HTMLZAPLib>,
	public IPersistStreamInitImpl<CHtmlParse>,
	public IPersistStorageImpl<CHtmlParse>,
	public IQuickActivateImpl<CHtmlParse>,
	public IOleControlImpl<CHtmlParse>,
	public IOleObjectImpl<CHtmlParse>,
	public IOleInPlaceActiveObjectImpl<CHtmlParse>,
	public IViewObjectExImpl<CHtmlParse>,
	public IOleInPlaceObjectWindowlessImpl<CHtmlParse>,
	public IDataObjectImpl<CHtmlParse>,
    public ISupportErrorInfo,
	public ISpecifyPropertyPagesImpl<CHtmlParse>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_HTMLPARSE)

BEGIN_COM_MAP(CHtmlParse)
	COM_INTERFACE_ENTRY(IHtmlParse)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY_IMPL(IViewObjectEx)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IViewObject2, IViewObjectEx)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IViewObject, IViewObjectEx)
	COM_INTERFACE_ENTRY_IMPL(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IOleInPlaceObject, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY_IMPL(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY_IMPL(IOleControl)
	COM_INTERFACE_ENTRY_IMPL(IOleObject)
	COM_INTERFACE_ENTRY_IMPL(IQuickActivate)
	COM_INTERFACE_ENTRY_IMPL(IPersistStorage)
	COM_INTERFACE_ENTRY_IMPL(IPersistStreamInit)
	COM_INTERFACE_ENTRY_IMPL(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY_IMPL(IDataObject)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
    COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

BEGIN_PROPERTY_MAP(CHtmlParse)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	PROP_PAGE(CLSID_StockColorPage)
END_PROPERTY_MAP()


BEGIN_MSG_MAP(CHtmlParse)
	MESSAGE_HANDLER(WM_PAINT, OnPaint)
	MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
	MESSAGE_HANDLER(WM_KILLFOCUS, OnKillFocus)
END_MSG_MAP()


// IViewObjectEx
	STDMETHOD(GetViewStatus)(DWORD* pdwStatus)
	{
		ATLTRACE(_T("IViewObjectExImpl::GetViewStatus\n"));
		*pdwStatus = VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE;
		return S_OK;
	}

// IHtmlParse
public:
	STDMETHOD(get_Percent)(/*[out, retval]*/ short *pVal);
	STDMETHOD(put_Param)(BSTR pName, /*[in]*/ BSTR newVal);
	STDMETHOD(get_ToString)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_MaxParam)(/*[out, retval]*/ short *pVal);
	STDMETHOD(get_HdrLevel)(/*[out, retval]*/ short *pVal);
	STDMETHOD(get_Position)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_Position)(/*[in]*/ long newVal);
	STDMETHOD(get_TagName)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_IsTag)(/*[out, retval]*/ BOOL *pVal);
	STDMETHOD(get_CompressWS)(/*[out, retval]*/ BOOL *pVal);
	STDMETHOD(put_CompressWS)(/*[in]*/ BOOL newVal);
	STDMETHOD(get_Param)(/*[in]*/ BSTR pName, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(Next)();
	STDMETHOD(Rewind)();
	STDMETHOD(LoadBuffer)(VARIANT buf);
	STDMETHOD(Load)(/*[in]*/ BSTR iString);
	STDMETHOD(Reset)();
	STDMETHOD(get_EOF)(/*[out, retval]*/ BOOL *pVal);
	STDMETHOD(get_Text)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_PValue)(/*[int]*/ short pIndex, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_PName)(/*[in]*/ short pIndex, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_ClosedTag)(/*[out, retval]*/ BOOL *pVal);
	HRESULT OnDraw(ATL_DRAWINFO& di);

	HRESULT STDMETHODCALLTYPE CHtmlParse::InterfaceSupportsErrorInfo(REFIID riid);

	//
	// My actual implementations
	//

protected:

	BSTR CHtmlParse::MakeString(const char *cp, int slen, const char *label);

	char *CHtmlParse::AppendString(BSTR ins, char *ap);

	char *htbuf;				// Storage for copy of input data
	HLOCAL hthandle;		// Handle to memory

	HANDLE fhd, fmap;		// File handle and map for mapped mode

	bool mapdfile;			// This is a mapped file

	char *posn;				// Current position in buffer
	char *eob;				// End of buffer

	bool TextMode;			// Currently in Text mode

	BSTR Tag;				// The HTML tag
	BSTR Text;				// Accumulated text if no tag

	BSTR orig;				// The original tag string without <>'s

#define MAX_PARAMS 20		// Most HTML tag parameters allowed
#define MAX_CNLEN 64

	typedef struct ParamTable_struct 
	{
		BSTR pName;			// Parameter Name
		BSTR pVal;			// Parameter Value
		char cName[MAX_CNLEN + 2];		// Parameter name in multibyte
	} PTable;
	
	PTable ParamTable[MAX_PARAMS];

	int nParams;			// Number of parameters in table

	bool closedTag;			// Tag is />

	bool cWS;				// Compress Whitespace

	short HeaderLevel;		// Current header level

	char *convbuf;			// Convert buffer for AppendString
	HLOCAL convhandle;		// Convert handle

#if PDEBUG
	FILE *dfile;
	char *dfname;
#endif

public:
	STDMETHOD(RemoveParam)(VARIANT param);
	STDMETHOD(URLCanonicalize)(BSTR rawURL, BOOL escapeChars, BSTR *canonURL);
	STDMETHOD(URLCombine)(BSTR baseURL, BSTR relativeURL, BOOL escapeChars, BSTR *combinedURL);
	CHtmlParse()
	{

		htbuf = NULL;
		hthandle = NULL;
		Tag = NULL;
		Text = NULL;
		orig = NULL;
		HeaderLevel = 0;
		mapdfile = false;

		closedTag = false;

		fhd = fmap = NULL;

		ZeroMemory(ParamTable, sizeof(ParamTable));	// Clear all the BSTRs

//		cWS = true;			// Default to compressing out whitespace

		convbuf = NULL;

		zPicture = NULL;
 
#if PDEBUG
		dfile = NULL;
		dfname = NULL;
#endif

	}

	~CHtmlParse()
	{

		Reset();

		if (convbuf != NULL) {			// Convert buffer has been allocated
			LocalUnlock(convhandle);
			LocalFree(convhandle);
			}

#if PDEBUG
		if (dfile != NULL)
			fclose(dfile);

		if (dfname != NULL)
			free(dfile);
#endif
	}

protected:
	PTable * FindByName(BSTR pName);
	HBITMAP zPicture;
};



//
// isspace looks for spaces...
//

inline bool isspace(char ch)
{

	return(ch <= ' ');

}


//
// tolower converts from upper to lower case
//
inline char tolower(char ch)
{

	return((ch >= 'A' && ch <= 'Z') ? (ch | 0x20) : ch);

}

#endif //__HTMLPARSE_H_
