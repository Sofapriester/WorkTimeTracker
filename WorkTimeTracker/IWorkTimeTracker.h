#pragma once
#include "pch.h"

#ifdef WORKTIMETRACKER_EXPORTS
#define WorkTimeTracker_API __declspec(dllexport)
#else
#define WorkTimeTracker_API __declspec(dllimport)
#endif

extern "C" WorkTimeTracker_API void __stdcall GlobalTestFunc();

class WorkTimeTracker_API IWorkTimeTracker
{
public:
    virtual void __stdcall OnStart();

    IWorkTimeTracker() = default;
    virtual ~IWorkTimeTracker() = default;
};
