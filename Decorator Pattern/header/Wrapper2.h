/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-09 13:49:07
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-09 14:25:58
 */

#ifndef WRAPPER2
#define WRAPPER2

#include "_Wrapper.h"
#include "_Handler.h"
#include <math.h>

class Wrapper2 : public _Wrapper
{
public:
    Wrapper2(_Handler *_handler);
    float getValue() override;

private:
    _Handler *_handler;
protected:
};
#include "../source/Wrapper2.cpp"
#endif