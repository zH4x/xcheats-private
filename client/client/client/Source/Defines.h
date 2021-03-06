#pragma once

typedef struct _CopyStruct
{
	INT dpid;
	ULONGLONG daddr;

	INT spid;
	ULONGLONG saddr;

	INT size;

	INT handled;
	INT getbase;
	INT shouldexit;
} CopyStruct;

#define EXPORT_VOID __declspec(dllexport) void __stdcall
#define EXPORT_INT __declspec(dllexport) INT __stdcall
#define EXPORT_ULONGLONG __declspec(dllexport) ULONGLONG __stdcall
#define EXPORT_STRUCT __declspec(dllexport) CopyStruct __stdcall

#define MAGIC 0xFEED
#define DLL_NAME L"client_xcheats.dll"
#define GAME_NAME L"r5apex.exe"