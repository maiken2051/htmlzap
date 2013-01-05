
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AXP64)
#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "Htmlzap.h"

#define TYPE_FORMAT_STRING_SIZE   1015                              
#define PROC_FORMAT_STRING_SIZE   899                               
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IHtmlParse, ver. 0.0,
   GUID={0x053957FD,0xCB0A,0x11D0,{0x89,0x88,0x44,0x45,0x53,0x54,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHtmlParse_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IHtmlParse_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    34,
    68,
    96,
    124,
    146,
    174,
    202,
    224,
    246,
    280,
    314,
    342,
    370,
    398,
    426,
    454,
    482,
    510,
    538,
    566,
    594,
    640,
    680
    };

static const MIDL_SERVER_INFO IHtmlParse_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHtmlParse_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IHtmlParse_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHtmlParse_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(31) _IHtmlParseProxyVtbl = 
{
    &IHtmlParse_ProxyInfo,
    &IID_IHtmlParse,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IHtmlParse::get_PName */ ,
    (void *)-1 /* IHtmlParse::get_PValue */ ,
    (void *)-1 /* IHtmlParse::get_Text */ ,
    (void *)-1 /* IHtmlParse::get_EOF */ ,
    (void *)-1 /* IHtmlParse::Reset */ ,
    (void *)-1 /* IHtmlParse::Load */ ,
    (void *)-1 /* IHtmlParse::LoadBuffer */ ,
    (void *)-1 /* IHtmlParse::Rewind */ ,
    (void *)-1 /* IHtmlParse::Next */ ,
    (void *)-1 /* IHtmlParse::get_Param */ ,
    (void *)-1 /* IHtmlParse::put_Param */ ,
    (void *)-1 /* IHtmlParse::get_CompressWS */ ,
    (void *)-1 /* IHtmlParse::put_CompressWS */ ,
    (void *)-1 /* IHtmlParse::get_IsTag */ ,
    (void *)-1 /* IHtmlParse::get_TagName */ ,
    (void *)-1 /* IHtmlParse::get_Position */ ,
    (void *)-1 /* IHtmlParse::put_Position */ ,
    (void *)-1 /* IHtmlParse::get_HdrLevel */ ,
    (void *)-1 /* IHtmlParse::get_MaxParam */ ,
    (void *)-1 /* IHtmlParse::get_ToString */ ,
    (void *)-1 /* IHtmlParse::get_Percent */ ,
    (void *)-1 /* IHtmlParse::URLCombine */ ,
    (void *)-1 /* IHtmlParse::URLCanonicalize */ ,
    (void *)-1 /* IHtmlParse::RemoveParam */
};


static const PRPC_STUB_FUNCTION IHtmlParse_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IHtmlParseStubVtbl =
{
    &IID_IHtmlParse,
    &IHtmlParse_ServerInfo,
    31,
    &IHtmlParse_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStringAccumulator, ver. 0.0,
   GUID={0xAF469F01,0x13E3,0x11D1,{0x89,0x88,0x44,0x45,0x53,0x54,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStringAccumulator_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IStringAccumulator_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    708,
    730,
    758,
    786,
    814,
    842,
    870
    };

static const MIDL_SERVER_INFO IStringAccumulator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IStringAccumulator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStringAccumulator_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IStringAccumulator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(14) _IStringAccumulatorProxyVtbl = 
{
    &IStringAccumulator_ProxyInfo,
    &IID_IStringAccumulator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IStringAccumulator::Reset */ ,
    (void *)-1 /* IStringAccumulator::Add */ ,
    (void *)-1 /* IStringAccumulator::AddCR */ ,
    (void *)-1 /* IStringAccumulator::get_String */ ,
    (void *)-1 /* IStringAccumulator::put_String */ ,
    (void *)-1 /* IStringAccumulator::get_Length */ ,
    (void *)-1 /* IStringAccumulator::get_IsEmpty */
};


static const PRPC_STUB_FUNCTION IStringAccumulator_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStringAccumulatorStubVtbl =
{
    &IID_IStringAccumulator,
    &IStringAccumulator_ServerInfo,
    14,
    &IStringAccumulator_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x5030118, /* MIDL Version 5.3.280 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_PName */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 10 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter Index */

/* 16 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 22 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 28 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PValue */

/* 34 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 44 */	NdrFcShort( 0x6 ),	/* 6 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter Index */

/* 50 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 54 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 56 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 60 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 62 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 66 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */

/* 68 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x8 ),	/* 8 */
/* 82 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 84 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 88 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EOF */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x10 ),	/* 16 */
/* 110 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter FileName */

/* 162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 166 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadBuffer */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
#ifndef _PPC_
#if !defined(_MIPS_)
/* 182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/*  MIPS Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x1c ),	/* PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter Buffer */

/* 190 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#ifndef _PPC_
#if !defined(_MIPS_)
/* 192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/*  MIPS Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 194 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Return value */

/* 196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#ifndef _PPC_
#if !defined(_MIPS_)
/* 198 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/*  MIPS Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Rewind */

/* 202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 210 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 220 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 238 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Param */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 254 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter ParamName */

/* 262 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 264 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 266 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pVal */

/* 268 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 270 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 272 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 276 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Param */

/* 280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 288 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 294 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter ParamName */

/* 296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 298 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 300 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter newVal */

/* 302 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 304 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 306 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 310 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CompressWS */

/* 314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 322 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x10 ),	/* 16 */
/* 328 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 332 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 338 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CompressWS */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 360 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 366 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsTag */

/* 370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 378 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x10 ),	/* 16 */
/* 384 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 388 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 394 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TagName */

/* 398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 406 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 412 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 414 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 418 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Position */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 434 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x10 ),	/* 16 */
/* 440 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 442 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 444 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 450 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Position */

/* 454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 462 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 472 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 478 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HdrLevel */

/* 482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 490 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0xe ),	/* 14 */
/* 496 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 500 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 502 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MaxParam */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 518 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0xe ),	/* 14 */
/* 524 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 528 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 530 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 534 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ToString */

/* 538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 546 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 552 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 554 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 556 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 558 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 562 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Percent */

/* 566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 574 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0xe ),	/* 14 */
/* 580 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 584 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 586 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 590 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure URLCombine */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 602 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x5,		/* 5 */

	/* Parameter baseURL */

/* 610 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 612 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 614 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter relativeURL */

/* 616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 618 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 620 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter escapeChars */

/* 622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 624 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter combinedURL */

/* 628 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 630 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 632 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 636 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure URLCanonicalize */

/* 640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 648 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 654 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x4,		/* 4 */

	/* Parameter rawURL */

/* 656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 658 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 660 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter escapeChars */

/* 662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 664 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter canonURL */

/* 668 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 670 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 672 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 676 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveParam */

/* 680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
#ifndef _PPC_
#if !defined(_MIPS_)
/* 688 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/*  MIPS Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x1c ),	/* PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 694 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter param */

/* 696 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#ifndef _PPC_
#if !defined(_MIPS_)
/* 698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/*  MIPS Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 700 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#ifndef _PPC_
#if !defined(_MIPS_)
/* 704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/*  MIPS Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 716 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 726 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 738 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 744 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter inps */

/* 746 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 748 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 750 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 754 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddCR */

/* 758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 766 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 772 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter inps */

/* 774 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 776 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 778 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */

/* 786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 794 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 802 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 804 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 806 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 810 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_String */

/* 814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 822 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 828 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 832 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 834 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 838 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Length */

/* 842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 850 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x10 ),	/* 16 */
/* 856 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 860 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsEmpty */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 878 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x10 ),	/* 16 */
/* 884 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 886 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 888 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 894 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1a ),	/* Offset= 26 (30) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xc ),	/* Offset= 12 (20) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 20 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x8 ),	/* 8 */
/* 24 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (10) */
/* 26 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 28 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 30 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x4 ),	/* 4 */
/* 36 */	NdrFcShort( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (6) */
/* 40 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 42 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x12, 0x0,	/* FC_UP */
/* 46 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (20) */
/* 48 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (44) */
/* 58 */	
			0x12, 0x0,	/* FC_UP */
/* 60 */	NdrFcShort( 0x398 ),	/* Offset= 920 (980) */
/* 62 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 64 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 66 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 68 */	NdrFcShort( 0x2 ),	/* Offset= 2 (70) */
/* 70 */	NdrFcShort( 0x10 ),	/* 16 */
/* 72 */	NdrFcShort( 0x2b ),	/* 43 */
/* 74 */	NdrFcLong( 0x3 ),	/* 3 */
/* 78 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 80 */	NdrFcLong( 0x11 ),	/* 17 */
/* 84 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 86 */	NdrFcLong( 0x2 ),	/* 2 */
/* 90 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 92 */	NdrFcLong( 0x4 ),	/* 4 */
/* 96 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 98 */	NdrFcLong( 0x5 ),	/* 5 */
/* 102 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 104 */	NdrFcLong( 0xb ),	/* 11 */
/* 108 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 110 */	NdrFcLong( 0xa ),	/* 10 */
/* 114 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 116 */	NdrFcLong( 0x6 ),	/* 6 */
/* 120 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (334) */
/* 122 */	NdrFcLong( 0x7 ),	/* 7 */
/* 126 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 128 */	NdrFcLong( 0x8 ),	/* 8 */
/* 132 */	NdrFcShort( 0xffffffa8 ),	/* Offset= -88 (44) */
/* 134 */	NdrFcLong( 0xd ),	/* 13 */
/* 138 */	NdrFcShort( 0xca ),	/* Offset= 202 (340) */
/* 140 */	NdrFcLong( 0x9 ),	/* 9 */
/* 144 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (358) */
/* 146 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 150 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (376) */
/* 152 */	NdrFcLong( 0x24 ),	/* 36 */
/* 156 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (908) */
/* 158 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 162 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (908) */
/* 164 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 168 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (912) */
/* 170 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 174 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (916) */
/* 176 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 180 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (920) */
/* 182 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 186 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (924) */
/* 188 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 192 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (928) */
/* 194 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 198 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (916) */
/* 200 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 204 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (920) */
/* 206 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 210 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (932) */
/* 212 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 216 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (928) */
/* 218 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 222 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (936) */
/* 224 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 228 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (940) */
/* 230 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 234 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (944) */
/* 236 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 240 */	NdrFcShort( 0x2c4 ),	/* Offset= 708 (948) */
/* 242 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 246 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (952) */
/* 248 */	NdrFcLong( 0x10 ),	/* 16 */
/* 252 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 254 */	NdrFcLong( 0x12 ),	/* 18 */
/* 258 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 260 */	NdrFcLong( 0x13 ),	/* 19 */
/* 264 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 266 */	NdrFcLong( 0x16 ),	/* 22 */
/* 270 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 272 */	NdrFcLong( 0x17 ),	/* 23 */
/* 276 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 278 */	NdrFcLong( 0xe ),	/* 14 */
/* 282 */	NdrFcShort( 0x2a6 ),	/* Offset= 678 (960) */
/* 284 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 288 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (972) */
/* 290 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 294 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (976) */
/* 296 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 300 */	NdrFcShort( 0x268 ),	/* Offset= 616 (916) */
/* 302 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 306 */	NdrFcShort( 0x266 ),	/* Offset= 614 (920) */
/* 308 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 312 */	NdrFcShort( 0x260 ),	/* Offset= 608 (920) */
/* 314 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 318 */	NdrFcShort( 0x25a ),	/* Offset= 602 (920) */
/* 320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* Offset= 0 (324) */
/* 326 */	NdrFcLong( 0x1 ),	/* 1 */
/* 330 */	NdrFcShort( 0x0 ),	/* Offset= 0 (330) */
/* 332 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (331) */
/* 334 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 340 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 352 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 354 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 356 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 358 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 360 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 370 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 372 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 374 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 376 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (380) */
/* 380 */	
			0x12, 0x0,	/* FC_UP */
/* 382 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (890) */
/* 384 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 386 */	NdrFcShort( 0x18 ),	/* 24 */
/* 388 */	NdrFcShort( 0xa ),	/* 10 */
/* 390 */	NdrFcLong( 0x8 ),	/* 8 */
/* 394 */	NdrFcShort( 0x58 ),	/* Offset= 88 (482) */
/* 396 */	NdrFcLong( 0xd ),	/* 13 */
/* 400 */	NdrFcShort( 0x78 ),	/* Offset= 120 (520) */
/* 402 */	NdrFcLong( 0x9 ),	/* 9 */
/* 406 */	NdrFcShort( 0x94 ),	/* Offset= 148 (554) */
/* 408 */	NdrFcLong( 0xc ),	/* 12 */
/* 412 */	NdrFcShort( 0xbc ),	/* Offset= 188 (600) */
/* 414 */	NdrFcLong( 0x24 ),	/* 36 */
/* 418 */	NdrFcShort( 0x114 ),	/* Offset= 276 (694) */
/* 420 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 424 */	NdrFcShort( 0x130 ),	/* Offset= 304 (728) */
/* 426 */	NdrFcLong( 0x10 ),	/* 16 */
/* 430 */	NdrFcShort( 0x148 ),	/* Offset= 328 (758) */
/* 432 */	NdrFcLong( 0x2 ),	/* 2 */
/* 436 */	NdrFcShort( 0x160 ),	/* Offset= 352 (788) */
/* 438 */	NdrFcLong( 0x3 ),	/* 3 */
/* 442 */	NdrFcShort( 0x178 ),	/* Offset= 376 (818) */
/* 444 */	NdrFcLong( 0x14 ),	/* 20 */
/* 448 */	NdrFcShort( 0x190 ),	/* Offset= 400 (848) */
/* 450 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (449) */
/* 452 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 454 */	NdrFcShort( 0x4 ),	/* 4 */
/* 456 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 462 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	0x12, 0x0,	/* FC_UP */
/* 476 */	NdrFcShort( 0xfffffe38 ),	/* Offset= -456 (20) */
/* 478 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 480 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 482 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 486 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 488 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 490 */	NdrFcShort( 0x4 ),	/* 4 */
/* 492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 494 */	0x11, 0x0,	/* FC_RP */
/* 496 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (452) */
/* 498 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 500 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 502 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 516 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (340) */
/* 518 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 520 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x6 ),	/* Offset= 6 (532) */
/* 528 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 532 */	
			0x11, 0x0,	/* FC_RP */
/* 534 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (502) */
/* 536 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0xffffff40 ),	/* Offset= -192 (358) */
/* 552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 554 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x6 ),	/* Offset= 6 (566) */
/* 562 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 564 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 566 */	
			0x11, 0x0,	/* FC_RP */
/* 568 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (536) */
/* 570 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 572 */	NdrFcShort( 0x4 ),	/* 4 */
/* 574 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 580 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 582 */	NdrFcShort( 0x4 ),	/* 4 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	0x12, 0x0,	/* FC_UP */
/* 594 */	NdrFcShort( 0x182 ),	/* Offset= 386 (980) */
/* 596 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 598 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 600 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x6 ),	/* Offset= 6 (612) */
/* 608 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 610 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 612 */	
			0x11, 0x0,	/* FC_RP */
/* 614 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (570) */
/* 616 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 618 */	NdrFcLong( 0x2f ),	/* 47 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 628 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 630 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 632 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 634 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 638 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 642 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 644 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 646 */	NdrFcShort( 0x10 ),	/* 16 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0xa ),	/* Offset= 10 (660) */
/* 652 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 654 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (616) */
/* 658 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 660 */	
			0x12, 0x0,	/* FC_UP */
/* 662 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (634) */
/* 664 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 666 */	NdrFcShort( 0x4 ),	/* 4 */
/* 668 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 674 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 676 */	NdrFcShort( 0x4 ),	/* 4 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	0x12, 0x0,	/* FC_UP */
/* 688 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (644) */
/* 690 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 692 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 694 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x6 ),	/* Offset= 6 (706) */
/* 702 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 704 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 706 */	
			0x11, 0x0,	/* FC_RP */
/* 708 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (664) */
/* 710 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 716 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x10 ),	/* 16 */
/* 720 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 722 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 724 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (710) */
			0x5b,		/* FC_END */
/* 728 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 730 */	NdrFcShort( 0x18 ),	/* 24 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0xa ),	/* Offset= 10 (744) */
/* 736 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 738 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (716) */
/* 742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 744 */	
			0x11, 0x0,	/* FC_RP */
/* 746 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (502) */
/* 748 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 758 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 764 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 766 */	NdrFcShort( 0x4 ),	/* 4 */
/* 768 */	NdrFcShort( 0x4 ),	/* 4 */
/* 770 */	0x12, 0x0,	/* FC_UP */
/* 772 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (748) */
/* 774 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 776 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 778 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 780 */	NdrFcShort( 0x2 ),	/* 2 */
/* 782 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 788 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 794 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 798 */	NdrFcShort( 0x4 ),	/* 4 */
/* 800 */	0x12, 0x0,	/* FC_UP */
/* 802 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (778) */
/* 804 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 806 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 808 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 810 */	NdrFcShort( 0x4 ),	/* 4 */
/* 812 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 818 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 822 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 824 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 830 */	0x12, 0x0,	/* FC_UP */
/* 832 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (808) */
/* 834 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 836 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 838 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 848 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 854 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	0x12, 0x0,	/* FC_UP */
/* 862 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (838) */
/* 864 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 866 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 868 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 874 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 876 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 880 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 882 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 884 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 886 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (868) */
/* 888 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 890 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x28 ),	/* 40 */
/* 894 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (876) */
/* 896 */	NdrFcShort( 0x0 ),	/* Offset= 0 (896) */
/* 898 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 900 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 902 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 904 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdf7 ),	/* Offset= -521 (384) */
			0x5b,		/* FC_END */
/* 908 */	
			0x12, 0x0,	/* FC_UP */
/* 910 */	NdrFcShort( 0xfffffef6 ),	/* Offset= -266 (644) */
/* 912 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 914 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 916 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 918 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 920 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 922 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 926 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 930 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 932 */	
			0x12, 0x0,	/* FC_UP */
/* 934 */	NdrFcShort( 0xfffffda8 ),	/* Offset= -600 (334) */
/* 936 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 938 */	NdrFcShort( 0xfffffc82 ),	/* Offset= -894 (44) */
/* 940 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 942 */	NdrFcShort( 0xfffffda6 ),	/* Offset= -602 (340) */
/* 944 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 946 */	NdrFcShort( 0xfffffdb4 ),	/* Offset= -588 (358) */
/* 948 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 950 */	NdrFcShort( 0xfffffdc2 ),	/* Offset= -574 (376) */
/* 952 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 954 */	NdrFcShort( 0x2 ),	/* Offset= 2 (956) */
/* 956 */	
			0x12, 0x0,	/* FC_UP */
/* 958 */	NdrFcShort( 0x16 ),	/* Offset= 22 (980) */
/* 960 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 962 */	NdrFcShort( 0x10 ),	/* 16 */
/* 964 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 966 */	0x1,		/* FC_BYTE */
			0x38,		/* FC_ALIGNM4 */
/* 968 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 970 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 972 */	
			0x12, 0x0,	/* FC_UP */
/* 974 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (960) */
/* 976 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 978 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 980 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 982 */	NdrFcShort( 0x20 ),	/* 32 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* Offset= 0 (986) */
/* 988 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 990 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 992 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 994 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 996 */	NdrFcShort( 0xfffffc5a ),	/* Offset= -934 (62) */
/* 998 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1000 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1002 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0xfffffc4a ),	/* Offset= -950 (58) */
/* 1010 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1012 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

const CInterfaceProxyVtbl * _Htmlzap_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IStringAccumulatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHtmlParseProxyVtbl,
    0
};

const CInterfaceStubVtbl * _Htmlzap_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IStringAccumulatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IHtmlParseStubVtbl,
    0
};

PCInterfaceName const _Htmlzap_InterfaceNamesList[] = 
{
    "IStringAccumulator",
    "IHtmlParse",
    0
};

const IID *  _Htmlzap_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _Htmlzap_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Htmlzap, pIID, n)

int __stdcall _Htmlzap_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Htmlzap, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Htmlzap, 2, *pIndex )
    
}

const ExtendedProxyFileInfo Htmlzap_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Htmlzap_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Htmlzap_StubVtblList,
    (const PCInterfaceName * ) & _Htmlzap_InterfaceNamesList,
    (const IID ** ) & _Htmlzap_BaseIIDList,
    & _Htmlzap_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};


#endif /* !defined(_M_IA64) && !defined(_M_AXP64)*/


#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 5.03.0280 */
/* at Sun Jun 23 19:48:35 2002
 */
/* Compiler settings for Htmlzap.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win64 (32b run,appending), ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_IA64) || defined(_M_AXP64)
#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "Htmlzap.h"

#define TYPE_FORMAT_STRING_SIZE   997                               
#define PROC_FORMAT_STRING_SIZE   1209                              
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IHtmlParse, ver. 0.0,
   GUID={0x053957FD,0xCB0A,0x11D0,{0x89,0x88,0x44,0x45,0x53,0x54,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHtmlParse_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IHtmlParse_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    44,
    88,
    126,
    164,
    196,
    234,
    272,
    304,
    336,
    380,
    424,
    462,
    500,
    538,
    576,
    614,
    652,
    690,
    728,
    766,
    804,
    860,
    910
    };

static const MIDL_SERVER_INFO IHtmlParse_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHtmlParse_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IHtmlParse_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHtmlParse_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(31) _IHtmlParseProxyVtbl = 
{
    &IHtmlParse_ProxyInfo,
    &IID_IHtmlParse,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IHtmlParse::get_PName */ ,
    (void *)-1 /* IHtmlParse::get_PValue */ ,
    (void *)-1 /* IHtmlParse::get_Text */ ,
    (void *)-1 /* IHtmlParse::get_EOF */ ,
    (void *)-1 /* IHtmlParse::Reset */ ,
    (void *)-1 /* IHtmlParse::Load */ ,
    (void *)-1 /* IHtmlParse::LoadBuffer */ ,
    (void *)-1 /* IHtmlParse::Rewind */ ,
    (void *)-1 /* IHtmlParse::Next */ ,
    (void *)-1 /* IHtmlParse::get_Param */ ,
    (void *)-1 /* IHtmlParse::put_Param */ ,
    (void *)-1 /* IHtmlParse::get_CompressWS */ ,
    (void *)-1 /* IHtmlParse::put_CompressWS */ ,
    (void *)-1 /* IHtmlParse::get_IsTag */ ,
    (void *)-1 /* IHtmlParse::get_TagName */ ,
    (void *)-1 /* IHtmlParse::get_Position */ ,
    (void *)-1 /* IHtmlParse::put_Position */ ,
    (void *)-1 /* IHtmlParse::get_HdrLevel */ ,
    (void *)-1 /* IHtmlParse::get_MaxParam */ ,
    (void *)-1 /* IHtmlParse::get_ToString */ ,
    (void *)-1 /* IHtmlParse::get_Percent */ ,
    (void *)-1 /* IHtmlParse::URLCombine */ ,
    (void *)-1 /* IHtmlParse::URLCanonicalize */ ,
    (void *)-1 /* IHtmlParse::RemoveParam */
};


static const PRPC_STUB_FUNCTION IHtmlParse_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IHtmlParseStubVtbl =
{
    &IID_IHtmlParse,
    &IHtmlParse_ServerInfo,
    31,
    &IHtmlParse_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStringAccumulator, ver. 0.0,
   GUID={0xAF469F01,0x13E3,0x11D1,{0x89,0x88,0x44,0x45,0x53,0x54,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStringAccumulator_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IStringAccumulator_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    948,
    980,
    1018,
    1056,
    1094,
    1132,
    1170
    };

static const MIDL_SERVER_INFO IStringAccumulator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IStringAccumulator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStringAccumulator_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IStringAccumulator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(14) _IStringAccumulatorProxyVtbl = 
{
    &IStringAccumulator_ProxyInfo,
    &IID_IStringAccumulator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IStringAccumulator::Reset */ ,
    (void *)-1 /* IStringAccumulator::Add */ ,
    (void *)-1 /* IStringAccumulator::AddCR */ ,
    (void *)-1 /* IStringAccumulator::get_String */ ,
    (void *)-1 /* IStringAccumulator::put_String */ ,
    (void *)-1 /* IStringAccumulator::get_Length */ ,
    (void *)-1 /* IStringAccumulator::get_IsEmpty */
};


static const PRPC_STUB_FUNCTION IStringAccumulator_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStringAccumulatorStubVtbl =
{
    &IID_IStringAccumulator,
    &IStringAccumulator_ServerInfo,
    14,
    &IStringAccumulator_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x5030118, /* MIDL Version 5.3.280 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_PName */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x20 ),	/* ia64, axp64 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Index */

/* 26 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 30 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 32 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 34 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PValue */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	NdrFcShort( 0x20 ),	/* ia64, axp64 Stack size/offset = 32 */
/* 54 */	NdrFcShort( 0x6 ),	/* 6 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 60 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Index */

/* 70 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 72 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 74 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 76 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 78 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 80 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 82 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 84 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */

/* 88 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x9 ),	/* 9 */
/* 96 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 102 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 104 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 114 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 118 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EOF */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0xa ),	/* 10 */
/* 134 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x10 ),	/* 16 */
/* 140 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 142 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 154 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 160 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0xb ),	/* 11 */
/* 172 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 180 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 192 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0xc ),	/* 12 */
/* 204 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 212 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 224 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 226 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadBuffer */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x30 ),	/* ia64 Stack size/offset = 48 */
#else
			NdrFcShort( 0x28 ),	/* axp64 Stack size/offset = 40 */
#endif
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 250 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x20 ),	/* 32 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Buffer */

/* 260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 262 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
#else
			NdrFcShort( 0x8 ),	/* axp64 Stack size/offset = 8 */
#endif
/* 264 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 268 */	NdrFcShort( 0x28 ),	/* ia64 Stack size/offset = 40 */
#else
			NdrFcShort( 0x20 ),	/* axp64 Stack size/offset = 32 */
#endif
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Rewind */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0xe ),	/* 14 */
/* 280 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 288 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 300 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0xf ),	/* 15 */
/* 312 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 318 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 320 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Param */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x10 ),	/* 16 */
/* 344 */	NdrFcShort( 0x20 ),	/* ia64, axp64 Stack size/offset = 32 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 352 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParamName */

/* 362 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 364 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 366 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pVal */

/* 368 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 370 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 372 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 376 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Param */

/* 380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x11 ),	/* 17 */
/* 388 */	NdrFcShort( 0x20 ),	/* ia64, axp64 Stack size/offset = 32 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 394 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 396 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x2 ),	/* 2 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParamName */

/* 406 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 408 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 410 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter newVal */

/* 412 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 414 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 416 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CompressWS */

/* 424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x12 ),	/* 18 */
/* 432 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x10 ),	/* 16 */
/* 438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CompressWS */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x13 ),	/* 19 */
/* 470 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 478 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 490 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 496 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsTag */

/* 500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x14 ),	/* 20 */
/* 508 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x10 ),	/* 16 */
/* 514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 516 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 528 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 534 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TagName */

/* 538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x15 ),	/* 21 */
/* 546 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 552 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 554 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 564 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 568 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Position */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x16 ),	/* 22 */
/* 584 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x10 ),	/* 16 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 604 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 610 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Position */

/* 614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x17 ),	/* 23 */
/* 622 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 628 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 630 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 642 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 648 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HdrLevel */

/* 652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x18 ),	/* 24 */
/* 660 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0xe ),	/* 14 */
/* 666 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 668 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 680 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 682 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MaxParam */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x19 ),	/* 25 */
/* 698 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xe ),	/* 14 */
/* 704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 706 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 718 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 720 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 724 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ToString */

/* 728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x1a ),	/* 26 */
/* 736 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 742 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 744 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 754 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 756 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 758 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 762 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Percent */

/* 766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x1b ),	/* 27 */
/* 774 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0xe ),	/* 14 */
/* 780 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 782 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 794 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 796 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 800 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure URLCombine */

/* 804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x1c ),	/* 28 */
/* 812 */	NdrFcShort( 0x30 ),	/* ia64, axp64 Stack size/offset = 48 */
/* 814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 818 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 820 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 824 */	NdrFcShort( 0x2 ),	/* 2 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter baseURL */

/* 830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 832 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 834 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter relativeURL */

/* 836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 838 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 840 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter escapeChars */

/* 842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 844 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter combinedURL */

/* 848 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 850 */	NdrFcShort( 0x20 ),	/* ia64, axp64 Stack size/offset = 32 */
/* 852 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 856 */	NdrFcShort( 0x28 ),	/* ia64, axp64 Stack size/offset = 40 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure URLCanonicalize */

/* 860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x1d ),	/* 29 */
/* 868 */	NdrFcShort( 0x28 ),	/* ia64, axp64 Stack size/offset = 40 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 874 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 876 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rawURL */

/* 886 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 888 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 890 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter escapeChars */

/* 892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 894 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter canonURL */

/* 898 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 900 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 902 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 906 */	NdrFcShort( 0x20 ),	/* ia64, axp64 Stack size/offset = 32 */
/* 908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveParam */

/* 910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 918 */	NdrFcShort( 0x30 ),	/* ia64 Stack size/offset = 48 */
#else
			NdrFcShort( 0x28 ),	/* axp64 Stack size/offset = 40 */
#endif
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 924 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 926 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x20 ),	/* 32 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter param */

/* 936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 938 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
#else
			NdrFcShort( 0x8 ),	/* axp64 Stack size/offset = 8 */
#endif
/* 940 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 944 */	NdrFcShort( 0x28 ),	/* ia64 Stack size/offset = 40 */
#else
			NdrFcShort( 0x20 ),	/* axp64 Stack size/offset = 32 */
#endif
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x7 ),	/* 7 */
/* 956 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 964 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 976 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 988 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 994 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 996 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter inps */

/* 1006 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1008 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 1010 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 1012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1014 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 1016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddCR */

/* 1018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1026 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1032 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1034 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter inps */

/* 1044 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1046 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 1048 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0xa ),	/* 10 */
/* 1064 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1072 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1082 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1084 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 1086 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1090 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 1092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_String */

/* 1094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0xb ),	/* 11 */
/* 1102 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1108 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1110 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1122 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 1124 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 1126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1128 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 1130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Length */

/* 1132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0xc ),	/* 12 */
/* 1140 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1148 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1160 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsEmpty */

/* 1170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0xd ),	/* 13 */
/* 1178 */	NdrFcShort( 0x18 ),	/* ia64, axp64 Stack size/offset = 24 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1184 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1186 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1198 */	NdrFcShort( 0x8 ),	/* ia64, axp64 Stack size/offset = 8 */
/* 1200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1204 */	NdrFcShort( 0x10 ),	/* ia64, axp64 Stack size/offset = 16 */
/* 1206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x12, 0x0,	/* FC_UP */
/* 48 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (22) */
/* 50 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (46) */
/* 60 */	
			0x12, 0x0,	/* FC_UP */
/* 62 */	NdrFcShort( 0x384 ),	/* Offset= 900 (962) */
/* 64 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 66 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 68 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 70 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	NdrFcShort( 0x10 ),	/* 16 */
/* 76 */	NdrFcShort( 0x2b ),	/* 43 */
/* 78 */	NdrFcLong( 0x3 ),	/* 3 */
/* 82 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 84 */	NdrFcLong( 0x11 ),	/* 17 */
/* 88 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 90 */	NdrFcLong( 0x2 ),	/* 2 */
/* 94 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 96 */	NdrFcLong( 0x4 ),	/* 4 */
/* 100 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 102 */	NdrFcLong( 0x5 ),	/* 5 */
/* 106 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 108 */	NdrFcLong( 0xb ),	/* 11 */
/* 112 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 114 */	NdrFcLong( 0xa ),	/* 10 */
/* 118 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 120 */	NdrFcLong( 0x6 ),	/* 6 */
/* 124 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (338) */
/* 126 */	NdrFcLong( 0x7 ),	/* 7 */
/* 130 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 132 */	NdrFcLong( 0x8 ),	/* 8 */
/* 136 */	NdrFcShort( 0xffffffa6 ),	/* Offset= -90 (46) */
/* 138 */	NdrFcLong( 0xd ),	/* 13 */
/* 142 */	NdrFcShort( 0xca ),	/* Offset= 202 (344) */
/* 144 */	NdrFcLong( 0x9 ),	/* 9 */
/* 148 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (362) */
/* 150 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 154 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (380) */
/* 156 */	NdrFcLong( 0x24 ),	/* 36 */
/* 160 */	NdrFcShort( 0x2da ),	/* Offset= 730 (890) */
/* 162 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 166 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (890) */
/* 168 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 172 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (894) */
/* 174 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 178 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (898) */
/* 180 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 184 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (902) */
/* 186 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 190 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (906) */
/* 192 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 196 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (910) */
/* 198 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 202 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (898) */
/* 204 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 208 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (902) */
/* 210 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 214 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (914) */
/* 216 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 220 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (910) */
/* 222 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 226 */	NdrFcShort( 0x2b4 ),	/* Offset= 692 (918) */
/* 228 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 232 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (922) */
/* 234 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 238 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (926) */
/* 240 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 244 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (930) */
/* 246 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 250 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (934) */
/* 252 */	NdrFcLong( 0x10 ),	/* 16 */
/* 256 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 258 */	NdrFcLong( 0x12 ),	/* 18 */
/* 262 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 264 */	NdrFcLong( 0x13 ),	/* 19 */
/* 268 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 270 */	NdrFcLong( 0x16 ),	/* 22 */
/* 274 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 276 */	NdrFcLong( 0x17 ),	/* 23 */
/* 280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 282 */	NdrFcLong( 0xe ),	/* 14 */
/* 286 */	NdrFcShort( 0x290 ),	/* Offset= 656 (942) */
/* 288 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 292 */	NdrFcShort( 0x296 ),	/* Offset= 662 (954) */
/* 294 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 298 */	NdrFcShort( 0x294 ),	/* Offset= 660 (958) */
/* 300 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 304 */	NdrFcShort( 0x252 ),	/* Offset= 594 (898) */
/* 306 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 310 */	NdrFcShort( 0x250 ),	/* Offset= 592 (902) */
/* 312 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 316 */	NdrFcShort( 0x24a ),	/* Offset= 586 (902) */
/* 318 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 322 */	NdrFcShort( 0x244 ),	/* Offset= 580 (902) */
/* 324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* Offset= 0 (328) */
/* 330 */	NdrFcLong( 0x1 ),	/* 1 */
/* 334 */	NdrFcShort( 0x0 ),	/* Offset= 0 (334) */
/* 336 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (335) */
/* 338 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 344 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 358 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 360 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 362 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 364 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 376 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 378 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 380 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (384) */
/* 384 */	
			0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0x1e6 ),	/* Offset= 486 (872) */
/* 388 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 390 */	NdrFcShort( 0x20 ),	/* 32 */
/* 392 */	NdrFcShort( 0xa ),	/* 10 */
/* 394 */	NdrFcLong( 0x8 ),	/* 8 */
/* 398 */	NdrFcShort( 0x50 ),	/* Offset= 80 (478) */
/* 400 */	NdrFcLong( 0xd ),	/* 13 */
/* 404 */	NdrFcShort( 0x70 ),	/* Offset= 112 (516) */
/* 406 */	NdrFcLong( 0x9 ),	/* 9 */
/* 410 */	NdrFcShort( 0x90 ),	/* Offset= 144 (554) */
/* 412 */	NdrFcLong( 0xc ),	/* 12 */
/* 416 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (592) */
/* 418 */	NdrFcLong( 0x24 ),	/* 36 */
/* 422 */	NdrFcShort( 0x104 ),	/* Offset= 260 (682) */
/* 424 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 428 */	NdrFcShort( 0x120 ),	/* Offset= 288 (716) */
/* 430 */	NdrFcLong( 0x10 ),	/* 16 */
/* 434 */	NdrFcShort( 0x13a ),	/* Offset= 314 (748) */
/* 436 */	NdrFcLong( 0x2 ),	/* 2 */
/* 440 */	NdrFcShort( 0x150 ),	/* Offset= 336 (776) */
/* 442 */	NdrFcLong( 0x3 ),	/* 3 */
/* 446 */	NdrFcShort( 0x166 ),	/* Offset= 358 (804) */
/* 448 */	NdrFcLong( 0x14 ),	/* 20 */
/* 452 */	NdrFcShort( 0x17c ),	/* Offset= 380 (832) */
/* 454 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (453) */
/* 456 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 466 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 470 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 472 */	
			0x12, 0x0,	/* FC_UP */
/* 474 */	NdrFcShort( 0xfffffe3c ),	/* Offset= -452 (22) */
/* 476 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 478 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 480 */	NdrFcShort( 0x10 ),	/* 16 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x6 ),	/* Offset= 6 (490) */
/* 486 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 488 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 490 */	
			0x11, 0x0,	/* FC_RP */
/* 492 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (456) */
/* 494 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 504 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 508 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 512 */	NdrFcShort( 0xffffff58 ),	/* Offset= -168 (344) */
/* 514 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 516 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x6 ),	/* Offset= 6 (528) */
/* 524 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 526 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 528 */	
			0x11, 0x0,	/* FC_RP */
/* 530 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (494) */
/* 532 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 542 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 546 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0xffffff44 ),	/* Offset= -188 (362) */
/* 552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 554 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 556 */	NdrFcShort( 0x10 ),	/* 16 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x6 ),	/* Offset= 6 (566) */
/* 562 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 564 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 566 */	
			0x11, 0x0,	/* FC_RP */
/* 568 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (532) */
/* 570 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 580 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 584 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 586 */	
			0x12, 0x0,	/* FC_UP */
/* 588 */	NdrFcShort( 0x176 ),	/* Offset= 374 (962) */
/* 590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 592 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x6 ),	/* Offset= 6 (604) */
/* 600 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 602 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 604 */	
			0x11, 0x0,	/* FC_RP */
/* 606 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (570) */
/* 608 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 610 */	NdrFcLong( 0x2f ),	/* 47 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 624 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 626 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 632 */	NdrFcShort( 0x4 ),	/* 4 */
/* 634 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 636 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 638 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 640 */	NdrFcShort( 0x18 ),	/* 24 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0xc ),	/* Offset= 12 (656) */
/* 646 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 648 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 650 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (608) */
/* 652 */	0x39,		/* FC_ALIGNM8 */
			0x36,		/* FC_POINTER */
/* 654 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 656 */	
			0x12, 0x0,	/* FC_UP */
/* 658 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (626) */
/* 660 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 670 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 674 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 676 */	
			0x12, 0x0,	/* FC_UP */
/* 678 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (638) */
/* 680 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 682 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 684 */	NdrFcShort( 0x10 ),	/* 16 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x6 ),	/* Offset= 6 (694) */
/* 690 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 692 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 694 */	
			0x11, 0x0,	/* FC_RP */
/* 696 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (660) */
/* 698 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 702 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 704 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 708 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 710 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 712 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (698) */
			0x5b,		/* FC_END */
/* 716 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x20 ),	/* 32 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0xa ),	/* Offset= 10 (732) */
/* 724 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 726 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 728 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe7 ),	/* Offset= -25 (704) */
			0x5b,		/* FC_END */
/* 732 */	
			0x11, 0x0,	/* FC_RP */
/* 734 */	NdrFcShort( 0xffffff10 ),	/* Offset= -240 (494) */
/* 736 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 746 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 748 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 750 */	NdrFcShort( 0x10 ),	/* 16 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x6 ),	/* Offset= 6 (760) */
/* 756 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 758 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 760 */	
			0x12, 0x0,	/* FC_UP */
/* 762 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (736) */
/* 764 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 766 */	NdrFcShort( 0x2 ),	/* 2 */
/* 768 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 774 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 776 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 778 */	NdrFcShort( 0x10 ),	/* 16 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x6 ),	/* Offset= 6 (788) */
/* 784 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 786 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 788 */	
			0x12, 0x0,	/* FC_UP */
/* 790 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (764) */
/* 792 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 794 */	NdrFcShort( 0x4 ),	/* 4 */
/* 796 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 802 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 804 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x10 ),	/* 16 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x6 ),	/* Offset= 6 (816) */
/* 812 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 814 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 816 */	
			0x12, 0x0,	/* FC_UP */
/* 818 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (792) */
/* 820 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 830 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 832 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 834 */	NdrFcShort( 0x10 ),	/* 16 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x6 ),	/* Offset= 6 (844) */
/* 840 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 842 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 844 */	
			0x12, 0x0,	/* FC_UP */
/* 846 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (820) */
/* 848 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 856 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 862 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 864 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 866 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 868 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (848) */
/* 870 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 872 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 874 */	NdrFcShort( 0x38 ),	/* 56 */
/* 876 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (856) */
/* 878 */	NdrFcShort( 0x0 ),	/* Offset= 0 (878) */
/* 880 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 882 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 884 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 886 */	0x4,		/* 4 */
			NdrFcShort( 0xfffffe0d ),	/* Offset= -499 (388) */
			0x5b,		/* FC_END */
/* 890 */	
			0x12, 0x0,	/* FC_UP */
/* 892 */	NdrFcShort( 0xffffff02 ),	/* Offset= -254 (638) */
/* 894 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 896 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 898 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 900 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 904 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 908 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 912 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x12, 0x0,	/* FC_UP */
/* 916 */	NdrFcShort( 0xfffffdbe ),	/* Offset= -578 (338) */
/* 918 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 920 */	NdrFcShort( 0xfffffc96 ),	/* Offset= -874 (46) */
/* 922 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 924 */	NdrFcShort( 0xfffffdbc ),	/* Offset= -580 (344) */
/* 926 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 928 */	NdrFcShort( 0xfffffdca ),	/* Offset= -566 (362) */
/* 930 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 932 */	NdrFcShort( 0xfffffdd8 ),	/* Offset= -552 (380) */
/* 934 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 936 */	NdrFcShort( 0x2 ),	/* Offset= 2 (938) */
/* 938 */	
			0x12, 0x0,	/* FC_UP */
/* 940 */	NdrFcShort( 0x16 ),	/* Offset= 22 (962) */
/* 942 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 944 */	NdrFcShort( 0x10 ),	/* 16 */
/* 946 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 948 */	0x1,		/* FC_BYTE */
			0x38,		/* FC_ALIGNM4 */
/* 950 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 952 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 954 */	
			0x12, 0x0,	/* FC_UP */
/* 956 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (942) */
/* 958 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 960 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 962 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 964 */	NdrFcShort( 0x20 ),	/* 32 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* Offset= 0 (968) */
/* 970 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 972 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 974 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 976 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 978 */	NdrFcShort( 0xfffffc6e ),	/* Offset= -914 (64) */
/* 980 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 982 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 986 */	NdrFcShort( 0x18 ),	/* 24 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0xfffffc5e ),	/* Offset= -930 (60) */
/* 992 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 994 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

const CInterfaceProxyVtbl * _Htmlzap_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IStringAccumulatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHtmlParseProxyVtbl,
    0
};

const CInterfaceStubVtbl * _Htmlzap_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IStringAccumulatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IHtmlParseStubVtbl,
    0
};

PCInterfaceName const _Htmlzap_InterfaceNamesList[] = 
{
    "IStringAccumulator",
    "IHtmlParse",
    0
};

const IID *  _Htmlzap_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _Htmlzap_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Htmlzap, pIID, n)

int __stdcall _Htmlzap_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Htmlzap, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Htmlzap, 2, *pIndex )
    
}

const ExtendedProxyFileInfo Htmlzap_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Htmlzap_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Htmlzap_StubVtblList,
    (const PCInterfaceName * ) & _Htmlzap_InterfaceNamesList,
    (const IID ** ) & _Htmlzap_BaseIIDList,
    & _Htmlzap_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};


#endif /* defined(_M_IA64) || defined(_M_AXP64)*/

