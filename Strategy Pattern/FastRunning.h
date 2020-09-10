/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-08 21:14:22
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-08 21:48:48
 */

#include "_RunningBehavior.h"


#ifndef FASTRUNNING
#define FASTRUNNING
class FastRunning : public _RunningBehavior
{
private:
    /* data */
public:
    void Run();
};

#include "FastRunning.cpp"

#endif