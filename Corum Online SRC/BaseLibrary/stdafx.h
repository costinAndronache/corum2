// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������ 
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#if _MSC_VER <= 1200
#pragma warning (disable: 4786)
#endif

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

////#define GC_REDIRECT_TO_LOCAL
//#ifdef _USE_GC
//	#include <gc_cpp.h>
//	#define USE_STD_ALLOCATOR
//	#ifdef USE_STD_ALLOCATOR
//	#   include "gc_allocator.h"
//	#elif __GNUC__
//	#   include "new_gc_alloc.h"
//	#else
//	#   include "gc_alloc.h"
//	#endif
//	extern "C" {
//	#include "private/gc_priv.h"
//	}
//#endif

#include <winsock2.h>

//#ifdef GC_NAME_CONFLICT
//#   define USE_GC UseGC
//    struct foo * GC;
//#else
//#   define USE_GC GC
//#endif

// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
#include <windows.h>
#include <ShellApi.h>
#include <stdio.h>
#include <stdlib.h>				// _tsplitpath �� ����
#include <tchar.h>

#include <assert.h>

#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
//#define _CRTDBG_MAP_ALLOC
//#include <crtdbg.h>

//#ifdef _DEBUG_MEM
//	#include <MemoryMgr/StdAfx.h>
//	#include <MemoryMgr/mmgr.h>
//#endif

#include <BaseLibrary/Utility/Macro/CommonMacros.h>
#include <BaseLibrary/Utility/Macro/DebugMacros.h>		// #pragma todo() �� ����ϱ� ���� ����
#include <BaseLibrary/Utility/Debugging/BaseLog.h>
