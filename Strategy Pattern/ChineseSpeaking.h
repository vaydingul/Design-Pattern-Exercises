/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-08 21:14:40
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-08 21:48:53
 */
#include "_SpeakingBehavior.h"
#ifndef CHINESESPEAKING
#define CHINESESPEAKING
class ChineseSpeaking : public _SpeakingBehavior
{
private:
    /* data */
public:
    void Speak();
};

#include "ChineseSpeaking.cpp"


#endif