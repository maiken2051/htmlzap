
Htmlzapps.dll: dlldata.obj Htmlzap_p.obj Htmlzap_i.obj
	link /dll /out:Htmlzapps.dll /def:Htmlzapps.def /entry:DllMain dlldata.obj Htmlzap_p.obj Htmlzap_i.obj kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL $<

clean:
	@del Htmlzapps.dll
	@del Htmlzapps.lib
	@del Htmlzapps.exp
	@del dlldata.obj
	@del Htmlzap_p.obj
	@del Htmlzap_i.obj
