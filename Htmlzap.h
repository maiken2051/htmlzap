

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Dec 22 23:27:38 2012
 */
/* Compiler settings for Htmlzap.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Htmlzap_h__
#define __Htmlzap_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IHtmlParse_FWD_DEFINED__
#define __IHtmlParse_FWD_DEFINED__
typedef interface IHtmlParse IHtmlParse;
#endif 	/* __IHtmlParse_FWD_DEFINED__ */


#ifndef __IStringAccumulator_FWD_DEFINED__
#define __IStringAccumulator_FWD_DEFINED__
typedef interface IStringAccumulator IStringAccumulator;
#endif 	/* __IStringAccumulator_FWD_DEFINED__ */


#ifndef __HtmlParse_FWD_DEFINED__
#define __HtmlParse_FWD_DEFINED__

#ifdef __cplusplus
typedef class HtmlParse HtmlParse;
#else
typedef struct HtmlParse HtmlParse;
#endif /* __cplusplus */

#endif 	/* __HtmlParse_FWD_DEFINED__ */


#ifndef __StringAccumulator_FWD_DEFINED__
#define __StringAccumulator_FWD_DEFINED__

#ifdef __cplusplus
typedef class StringAccumulator StringAccumulator;
#else
typedef struct StringAccumulator StringAccumulator;
#endif /* __cplusplus */

#endif 	/* __StringAccumulator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IHtmlParse_INTERFACE_DEFINED__
#define __IHtmlParse_INTERFACE_DEFINED__

/* interface IHtmlParse */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IHtmlParse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("053957FD-CB0A-11D0-8988-444553540000")
    IHtmlParse : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PName( 
            /* [in] */ short Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PValue( 
            /* [in] */ short Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EOF( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadBuffer( 
            /* [in] */ VARIANT Buffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Rewind( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Param( 
            /* [in] */ BSTR ParamName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Param( 
            /* [in] */ BSTR ParamName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CompressWS( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CompressWS( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsTag( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TagName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HdrLevel( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxParam( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ToString( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Percent( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE URLCombine( 
            /* [in] */ BSTR baseURL,
            /* [in] */ BSTR relativeURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR *combinedURL) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE URLCanonicalize( 
            /* [in] */ BSTR rawURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR *canonURL) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveParam( 
            /* [in] */ VARIANT param) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClosedTag( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHtmlParseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHtmlParse * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHtmlParse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHtmlParse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHtmlParse * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHtmlParse * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHtmlParse * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHtmlParse * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PName )( 
            IHtmlParse * This,
            /* [in] */ short Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PValue )( 
            IHtmlParse * This,
            /* [in] */ short Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IHtmlParse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EOF )( 
            IHtmlParse * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IHtmlParse * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IHtmlParse * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadBuffer )( 
            IHtmlParse * This,
            /* [in] */ VARIANT Buffer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Rewind )( 
            IHtmlParse * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IHtmlParse * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Param )( 
            IHtmlParse * This,
            /* [in] */ BSTR ParamName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Param )( 
            IHtmlParse * This,
            /* [in] */ BSTR ParamName,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CompressWS )( 
            IHtmlParse * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CompressWS )( 
            IHtmlParse * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTag )( 
            IHtmlParse * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TagName )( 
            IHtmlParse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IHtmlParse * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IHtmlParse * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HdrLevel )( 
            IHtmlParse * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxParam )( 
            IHtmlParse * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToString )( 
            IHtmlParse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Percent )( 
            IHtmlParse * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *URLCombine )( 
            IHtmlParse * This,
            /* [in] */ BSTR baseURL,
            /* [in] */ BSTR relativeURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR *combinedURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *URLCanonicalize )( 
            IHtmlParse * This,
            /* [in] */ BSTR rawURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR *canonURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveParam )( 
            IHtmlParse * This,
            /* [in] */ VARIANT param);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClosedTag )( 
            IHtmlParse * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } IHtmlParseVtbl;

    interface IHtmlParse
    {
        CONST_VTBL struct IHtmlParseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHtmlParse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHtmlParse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHtmlParse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHtmlParse_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHtmlParse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHtmlParse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHtmlParse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHtmlParse_get_PName(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_PName(This,Index,pVal) ) 

#define IHtmlParse_get_PValue(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_PValue(This,Index,pVal) ) 

#define IHtmlParse_get_Text(This,pVal)	\
    ( (This)->lpVtbl -> get_Text(This,pVal) ) 

#define IHtmlParse_get_EOF(This,pVal)	\
    ( (This)->lpVtbl -> get_EOF(This,pVal) ) 

#define IHtmlParse_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IHtmlParse_Load(This,FileName)	\
    ( (This)->lpVtbl -> Load(This,FileName) ) 

#define IHtmlParse_LoadBuffer(This,Buffer)	\
    ( (This)->lpVtbl -> LoadBuffer(This,Buffer) ) 

#define IHtmlParse_Rewind(This)	\
    ( (This)->lpVtbl -> Rewind(This) ) 

#define IHtmlParse_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IHtmlParse_get_Param(This,ParamName,pVal)	\
    ( (This)->lpVtbl -> get_Param(This,ParamName,pVal) ) 

#define IHtmlParse_put_Param(This,ParamName,newVal)	\
    ( (This)->lpVtbl -> put_Param(This,ParamName,newVal) ) 

#define IHtmlParse_get_CompressWS(This,pVal)	\
    ( (This)->lpVtbl -> get_CompressWS(This,pVal) ) 

#define IHtmlParse_put_CompressWS(This,newVal)	\
    ( (This)->lpVtbl -> put_CompressWS(This,newVal) ) 

#define IHtmlParse_get_IsTag(This,pVal)	\
    ( (This)->lpVtbl -> get_IsTag(This,pVal) ) 

#define IHtmlParse_get_TagName(This,pVal)	\
    ( (This)->lpVtbl -> get_TagName(This,pVal) ) 

#define IHtmlParse_get_Position(This,pVal)	\
    ( (This)->lpVtbl -> get_Position(This,pVal) ) 

#define IHtmlParse_put_Position(This,newVal)	\
    ( (This)->lpVtbl -> put_Position(This,newVal) ) 

#define IHtmlParse_get_HdrLevel(This,pVal)	\
    ( (This)->lpVtbl -> get_HdrLevel(This,pVal) ) 

#define IHtmlParse_get_MaxParam(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxParam(This,pVal) ) 

#define IHtmlParse_get_ToString(This,pVal)	\
    ( (This)->lpVtbl -> get_ToString(This,pVal) ) 

#define IHtmlParse_get_Percent(This,pVal)	\
    ( (This)->lpVtbl -> get_Percent(This,pVal) ) 

#define IHtmlParse_URLCombine(This,baseURL,relativeURL,escapeChars,combinedURL)	\
    ( (This)->lpVtbl -> URLCombine(This,baseURL,relativeURL,escapeChars,combinedURL) ) 

#define IHtmlParse_URLCanonicalize(This,rawURL,escapeChars,canonURL)	\
    ( (This)->lpVtbl -> URLCanonicalize(This,rawURL,escapeChars,canonURL) ) 

#define IHtmlParse_RemoveParam(This,param)	\
    ( (This)->lpVtbl -> RemoveParam(This,param) ) 

#define IHtmlParse_get_ClosedTag(This,pVal)	\
    ( (This)->lpVtbl -> get_ClosedTag(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHtmlParse_INTERFACE_DEFINED__ */


#ifndef __IStringAccumulator_INTERFACE_DEFINED__
#define __IStringAccumulator_INTERFACE_DEFINED__

/* interface IStringAccumulator */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStringAccumulator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF469F01-13E3-11D1-8988-444553540000")
    IStringAccumulator : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            BSTR inps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCR( 
            BSTR inps) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_String( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStringAccumulatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStringAccumulator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStringAccumulator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStringAccumulator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStringAccumulator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStringAccumulator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStringAccumulator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStringAccumulator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IStringAccumulator * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IStringAccumulator * This,
            BSTR inps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddCR )( 
            IStringAccumulator * This,
            BSTR inps);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_String )( 
            IStringAccumulator * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_String )( 
            IStringAccumulator * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IStringAccumulator * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IStringAccumulator * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } IStringAccumulatorVtbl;

    interface IStringAccumulator
    {
        CONST_VTBL struct IStringAccumulatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStringAccumulator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStringAccumulator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStringAccumulator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStringAccumulator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStringAccumulator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStringAccumulator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStringAccumulator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStringAccumulator_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IStringAccumulator_Add(This,inps)	\
    ( (This)->lpVtbl -> Add(This,inps) ) 

#define IStringAccumulator_AddCR(This,inps)	\
    ( (This)->lpVtbl -> AddCR(This,inps) ) 

#define IStringAccumulator_get_String(This,pVal)	\
    ( (This)->lpVtbl -> get_String(This,pVal) ) 

#define IStringAccumulator_put_String(This,newVal)	\
    ( (This)->lpVtbl -> put_String(This,newVal) ) 

#define IStringAccumulator_get_Length(This,pVal)	\
    ( (This)->lpVtbl -> get_Length(This,pVal) ) 

#define IStringAccumulator_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStringAccumulator_INTERFACE_DEFINED__ */



#ifndef __HTMLZAPLib_LIBRARY_DEFINED__
#define __HTMLZAPLib_LIBRARY_DEFINED__

/* library HTMLZAPLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_HTMLZAPLib;

EXTERN_C const CLSID CLSID_HtmlParse;

#ifdef __cplusplus

class DECLSPEC_UUID("053957FE-CB0A-11D0-8988-444553540000")
HtmlParse;
#endif

EXTERN_C const CLSID CLSID_StringAccumulator;

#ifdef __cplusplus

class DECLSPEC_UUID("AF469F02-13E3-11D1-8988-444553540000")
StringAccumulator;
#endif
#endif /* __HTMLZAPLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


