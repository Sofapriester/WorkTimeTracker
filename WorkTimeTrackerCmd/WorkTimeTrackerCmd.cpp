#include <iostream>
#include "WorkTimeTracker.h"
#include "IWorkTimeTracker.h"

int main()
{
    ::GlobalTestFunc();

    IWorkTimeTracker tracker;
    tracker.OnStart();

    std::cout << "Hello from WorkTimeTrackerCmd.exe" << std::endl;

    return EXIT_SUCCESS;
}
