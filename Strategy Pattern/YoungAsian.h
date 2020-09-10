/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-08 21:00:19
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-08 21:33:53
 */



#ifndef YOUNGASIAN
#define YOUNGASIAN

#include "_Human.h"
#include "_RunningBehavior.h"
#include "_SpeakingBehavior.h"
#include "ChineseSpeaking.h"
#include "FastRunning.h"

class YoungAsian : public _Human
{
private:
public:
    YoungAsian();
    ~YoungAsian();
};

#include "YoungAsian.cpp"

#endif