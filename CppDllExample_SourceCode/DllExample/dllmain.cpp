// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
DWORD WINAPI Thread() {
    if (MessageBoxA(0, "Hello World?", "Some Example", MB_YESNO | MB_ICONQUESTION) == IDYES) {
        MessageBoxA(0, "Hello :3", "Some Example", 0);
        ExitProcess(4003);
    }
    else {
        MessageBoxA(0, "Hello World", "Some Example", 0);
        ExitProcess(0);
    }
    return TRUE;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Thread, 0, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

