#include "pch.h"
#include "IWorkTimeTracker.h"

void __stdcall GlobalTestFunc()
{
    std::cout << "Hello from GlobalTestFunc" << std::endl;
}

void __stdcall IWorkTimeTracker::OnStart()
{
    std::cout << "Hello from IWorkTimeTracker::OnStart" << std::endl;
}
