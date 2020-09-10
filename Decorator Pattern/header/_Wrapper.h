/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-09 13:49:07
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-09 14:33:41
 */

#ifndef _WRAPPER
#define _WRAPPER

#include "_Handler.h"

class _Wrapper : public _Handler
{
public:
    
    virtual float getValue() = 0;

private:
protected:
};
#include "../source/_Wrapper.cpp"
#endif