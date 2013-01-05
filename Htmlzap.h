
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0280 */
/* at Sun Jun 23 19:48:35 2002
 */
/* Compiler settings for Htmlzap.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

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
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PValue( 
            /* [in] */ short Index,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EOF( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadBuffer( 
            /* [in] */ VARIANT Buffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Rewind( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Param( 
            /* [in] */ BSTR ParamName,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Param( 
            /* [in] */ BSTR ParamName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CompressWS( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CompressWS( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsTag( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TagName( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HdrLevel( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxParam( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ToString( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Percent( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE URLCombine( 
            /* [in] */ BSTR baseURL,
            /* [in] */ BSTR relativeURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR __RPC_FAR *combinedURL) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE URLCanonicalize( 
            /* [in] */ BSTR rawURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR __RPC_FAR *canonURL) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveParam( 
            /* [in] */ VARIANT param) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHtmlParseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHtmlParse __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHtmlParse __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IHtmlParse __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PName )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ short Index,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PValue )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ short Index,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Text )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_EOF )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IHtmlParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Load )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadBuffer )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ VARIANT Buffer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Rewind )( 
            IHtmlParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IHtmlParse __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Param )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ BSTR ParamName,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Param )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ BSTR ParamName,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CompressWS )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_CompressWS )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsTag )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TagName )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Position )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Position )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HdrLevel )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MaxParam )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ToString )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Percent )( 
            IHtmlParse __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *URLCombine )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ BSTR baseURL,
            /* [in] */ BSTR relativeURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR __RPC_FAR *combinedURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *URLCanonicalize )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ BSTR rawURL,
            /* [in] */ BOOL escapeChars,
            /* [retval][out] */ BSTR __RPC_FAR *canonURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveParam )( 
            IHtmlParse __RPC_FAR * This,
            /* [in] */ VARIANT param);
        
        END_INTERFACE
    } IHtmlParseVtbl;

    interface IHtmlParse
    {
        CONST_VTBL struct IHtmlParseVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHtmlParse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHtmlParse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHtmlParse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHtmlParse_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IHtmlParse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IHtmlParse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IHtmlParse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IHtmlParse_get_PName(This,Index,pVal)	\
    (This)->lpVtbl -> get_PName(This,Index,pVal)

#define IHtmlParse_get_PValue(This,Index,pVal)	\
    (This)->lpVtbl -> get_PValue(This,Index,pVal)

#define IHtmlParse_get_Text(This,pVal)	\
    (This)->lpVtbl -> get_Text(This,pVal)

#define IHtmlParse_get_EOF(This,pVal)	\
    (This)->lpVtbl -> get_EOF(This,pVal)

#define IHtmlParse_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IHtmlParse_Load(This,FileName)	\
    (This)->lpVtbl -> Load(This,FileName)

#define IHtmlParse_LoadBuffer(This,Buffer)	\
    (This)->lpVtbl -> LoadBuffer(This,Buffer)

#define IHtmlParse_Rewind(This)	\
    (This)->lpVtbl -> Rewind(This)

#define IHtmlParse_Next(This)	\
    (This)->lpVtbl -> Next(This)

#define IHtmlParse_get_Param(This,ParamName,pVal)	\
    (This)->lpVtbl -> get_Param(This,ParamName,pVal)

#define IHtmlParse_put_Param(This,ParamName,newVal)	\
    (This)->lpVtbl -> put_Param(This,ParamName,newVal)

#define IHtmlParse_get_CompressWS(This,pVal)	\
    (This)->lpVtbl -> get_CompressWS(This,pVal)

#define IHtmlParse_put_CompressWS(This,newVal)	\
    (This)->lpVtbl -> put_CompressWS(This,newVal)

#define IHtmlParse_get_IsTag(This,pVal)	\
    (This)->lpVtbl -> get_IsTag(This,pVal)

#define IHtmlParse_get_TagName(This,pVal)	\
    (This)->lpVtbl -> get_TagName(This,pVal)

#define IHtmlParse_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IHtmlParse_put_Position(This,newVal)	\
    (This)->lpVtbl -> put_Position(This,newVal)

#define IHtmlParse_get_HdrLevel(This,pVal)	\
    (This)->lpVtbl -> get_HdrLevel(This,pVal)

#define IHtmlParse_get_MaxParam(This,pVal)	\
    (This)->lpVtbl -> get_MaxParam(This,pVal)

#define IHtmlParse_get_ToString(This,pVal)	\
    (This)->lpVtbl -> get_ToString(This,pVal)

#define IHtmlParse_get_Percent(This,pVal)	\
    (This)->lpVtbl -> get_Percent(This,pVal)

#define IHtmlParse_URLCombine(This,baseURL,relativeURL,escapeChars,combinedURL)	\
    (This)->lpVtbl -> URLCombine(This,baseURL,relativeURL,escapeChars,combinedURL)

#define IHtmlParse_URLCanonicalize(This,rawURL,escapeChars,canonURL)	\
    (This)->lpVtbl -> URLCanonicalize(This,rawURL,escapeChars,canonURL)

#define IHtmlParse_RemoveParam(This,param)	\
    (This)->lpVtbl -> RemoveParam(This,param)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_PName_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ short Index,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_PName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_PValue_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ short Index,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_PValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_Text_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_EOF_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_EOF_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_Reset_Proxy( 
    IHtmlParse __RPC_FAR * This);


void __RPC_STUB IHtmlParse_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_Load_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ BSTR FileName);


void __RPC_STUB IHtmlParse_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_LoadBuffer_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ VARIANT Buffer);


void __RPC_STUB IHtmlParse_LoadBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_Rewind_Proxy( 
    IHtmlParse __RPC_FAR * This);


void __RPC_STUB IHtmlParse_Rewind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_Next_Proxy( 
    IHtmlParse __RPC_FAR * This);


void __RPC_STUB IHtmlParse_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_Param_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ BSTR ParamName,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_Param_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IHtmlParse_put_Param_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ BSTR ParamName,
    /* [in] */ BSTR newVal);


void __RPC_STUB IHtmlParse_put_Param_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_CompressWS_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_CompressWS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IHtmlParse_put_CompressWS_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IHtmlParse_put_CompressWS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_IsTag_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_IsTag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_TagName_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_TagName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_Position_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IHtmlParse_put_Position_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IHtmlParse_put_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_HdrLevel_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_HdrLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_MaxParam_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_MaxParam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_ToString_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_ToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IHtmlParse_get_Percent_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IHtmlParse_get_Percent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_URLCombine_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ BSTR baseURL,
    /* [in] */ BSTR relativeURL,
    /* [in] */ BOOL escapeChars,
    /* [retval][out] */ BSTR __RPC_FAR *combinedURL);


void __RPC_STUB IHtmlParse_URLCombine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_URLCanonicalize_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ BSTR rawURL,
    /* [in] */ BOOL escapeChars,
    /* [retval][out] */ BSTR __RPC_FAR *canonURL);


void __RPC_STUB IHtmlParse_URLCanonicalize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHtmlParse_RemoveParam_Proxy( 
    IHtmlParse __RPC_FAR * This,
    /* [in] */ VARIANT param);


void __RPC_STUB IHtmlParse_RemoveParam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



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
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStringAccumulatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStringAccumulator __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStringAccumulator __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStringAccumulator __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IStringAccumulator __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IStringAccumulator __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IStringAccumulator __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IStringAccumulator __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IStringAccumulator __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IStringAccumulator __RPC_FAR * This,
            BSTR inps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddCR )( 
            IStringAccumulator __RPC_FAR * This,
            BSTR inps);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_String )( 
            IStringAccumulator __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_String )( 
            IStringAccumulator __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Length )( 
            IStringAccumulator __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsEmpty )( 
            IStringAccumulator __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        END_INTERFACE
    } IStringAccumulatorVtbl;

    interface IStringAccumulator
    {
        CONST_VTBL struct IStringAccumulatorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStringAccumulator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStringAccumulator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStringAccumulator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStringAccumulator_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IStringAccumulator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IStringAccumulator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IStringAccumulator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IStringAccumulator_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IStringAccumulator_Add(This,inps)	\
    (This)->lpVtbl -> Add(This,inps)

#define IStringAccumulator_AddCR(This,inps)	\
    (This)->lpVtbl -> AddCR(This,inps)

#define IStringAccumulator_get_String(This,pVal)	\
    (This)->lpVtbl -> get_String(This,pVal)

#define IStringAccumulator_put_String(This,newVal)	\
    (This)->lpVtbl -> put_String(This,newVal)

#define IStringAccumulator_get_Length(This,pVal)	\
    (This)->lpVtbl -> get_Length(This,pVal)

#define IStringAccumulator_get_IsEmpty(This,pVal)	\
    (This)->lpVtbl -> get_IsEmpty(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IStringAccumulator_Reset_Proxy( 
    IStringAccumulator __RPC_FAR * This);


void __RPC_STUB IStringAccumulator_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IStringAccumulator_Add_Proxy( 
    IStringAccumulator __RPC_FAR * This,
    BSTR inps);


void __RPC_STUB IStringAccumulator_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IStringAccumulator_AddCR_Proxy( 
    IStringAccumulator __RPC_FAR * This,
    BSTR inps);


void __RPC_STUB IStringAccumulator_AddCR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStringAccumulator_get_String_Proxy( 
    IStringAccumulator __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IStringAccumulator_get_String_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IStringAccumulator_put_String_Proxy( 
    IStringAccumulator __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IStringAccumulator_put_String_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStringAccumulator_get_Length_Proxy( 
    IStringAccumulator __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IStringAccumulator_get_Length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStringAccumulator_get_IsEmpty_Proxy( 
    IStringAccumulator __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IStringAccumulator_get_IsEmpty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



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

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


