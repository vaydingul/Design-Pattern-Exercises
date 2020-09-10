/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-09 13:49:07
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-09 14:25:37
 */

#ifndef WRAPPER1
#define WRAPPER1

#include "_Wrapper.h"
#include "_Handler.h"
#include <math.h>

class Wrapper1 : public _Wrapper
{
public:
    Wrapper1(_Handler *_handler);
    float getValue() override;

private:
    _Handler *_handler;
    
protected:
};
#include "../source/Wrapper1.cpp"
#endif