/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-08 20:32:21
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-08 21:49:16
 */

#ifndef _HUMAN
#define _HUMAN
#include "_RunningBehavior.h"
#include "_SpeakingBehavior.h"

class _Human
{
public:
    _SpeakingBehavior *_speakingBehavior;
    _RunningBehavior *_runningBehavior;
    virtual void Run();
    virtual void Speak();
};

#include "_Human.cpp"

#endif