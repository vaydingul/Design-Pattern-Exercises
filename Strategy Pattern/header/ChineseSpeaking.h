/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-08 21:14:40
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-10 21:58:08
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

#include "../source/ChineseSpeaking.cpp"


#endif