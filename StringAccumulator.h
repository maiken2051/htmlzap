//
// HTMLZAP --- Simple HTML parsing ActiveX control (ATL)
//
// Copyright (C) 1998 Michael Newcomb
//
// Commercial reuse prohibited.
//
// StringAccumulator.h : Declaration of the CStringAccumulator

#ifndef __STRINGACCUMULATOR_H_
#define __STRINGACCUMULATOR_H_

#include "resource.h"       // main symbols


//
// String List class
//

class StringList {

	public:
		BSTR string;
		int len;
		StringList *next;

	public:
		StringList();
		StringList(BSTR inpstr);
		StringList(BSTR inp1, BSTR inp2);
		~StringList();

		void ClearChain();		// Clear everything from here on...

	};


/////////////////////////////////////////////////////////////////////////////
// CStringAccumulator
class ATL_NO_VTABLE CStringAccumulator : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CStringAccumulator, &CLSID_StringAccumulator>,
	public CComControl<CStringAccumulator>,
	public IDispatchImpl<IStringAccumulator, &IID_IStringAccumulator, &LIBID_HTMLZAPLib>,
	public IProvideClassInfo2Impl<&CLSID_StringAccumulator, NULL, &LIBID_HTMLZAPLib>,
	public IPersistStreamInitImpl<CStringAccumulator>,
	public IPersistStorageImpl<CStringAccumulator>,
	public IQuickActivateImpl<CStringAccumulator>,
	public IOleControlImpl<CStringAccumulator>,
	public IOleObjectImpl<CStringAccumulator>,
	public IOleInPlaceActiveObjectImpl<CStringAccumulator>,
	public IViewObjectExImpl<CStringAccumulator>,
	public IOleInPlaceObjectWindowlessImpl<CStringAccumulator>,
	public IDataObjectImpl<CStringAccumulator>,
	public ISupportErrorInfo,
	public ISpecifyPropertyPagesImpl<CStringAccumulator>
{
public:
	CStringAccumulator()
	{

		top = eol = NULL;
 
	}

	~CStringAccumulator()
	{

		if (top != NULL) {
			top->ClearChain();
			delete top;
			}

	}

DECLARE_REGISTRY_RESOURCEID(IDR_STRINGACCUMULATOR)

BEGIN_COM_MAP(CStringAccumulator)
	COM_INTERFACE_ENTRY(IStringAccumulator)
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

BEGIN_PROPERTY_MAP(CStringAccumulator)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	PROP_PAGE(CLSID_StockColorPage)
END_PROPERTY_MAP()


BEGIN_MSG_MAP(CStringAccumulator)
	MESSAGE_HANDLER(WM_PAINT, OnPaint)
	MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
	MESSAGE_HANDLER(WM_KILLFOCUS, OnKillFocus)
END_MSG_MAP()


// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IViewObjectEx
	STDMETHOD(GetViewStatus)(DWORD* pdwStatus)
	{
		ATLTRACE(_T("IViewObjectExImpl::GetViewStatus\n"));
		*pdwStatus = VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE;
		return S_OK;
	}

//
// Mike's variables
//
private:
	StringList *top, *eol;

// IStringAccumulator
public:
	STDMETHOD(get_IsEmpty)(/*[out, retval]*/ BOOL *pVal);
	STDMETHOD(get_Length)(/*[out, retval]*/ long *pVal);
	STDMETHOD(get_String)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(put_String)(/*[in]*/ BSTR newVal);
	STDMETHOD(AddCR)(BSTR inps);
	STDMETHOD(Add)(BSTR inps);
	STDMETHOD(Reset)();
	HRESULT OnDraw(ATL_DRAWINFO& di);

protected:
	HBITMAP zPicture;
};

#endif //__STRINGACCUMULATOR_H_
