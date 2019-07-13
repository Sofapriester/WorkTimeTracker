#include "pch.h"

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        std::cout << "Hello from WorkTimeTracker.dll DllMain()! ul_reason_for_call[" << ul_reason_for_call << "]" << std::endl;
        break;
    }
    return TRUE;
}
