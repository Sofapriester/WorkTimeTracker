#pragma once
#include "IWorkTimeTracker.h"

class WorkTimeTracker : public IWorkTimeTracker
{
public:
    virtual void __stdcall OnStart() override;

    WorkTimeTracker() = default;
    virtual ~WorkTimeTracker() = default;
};
