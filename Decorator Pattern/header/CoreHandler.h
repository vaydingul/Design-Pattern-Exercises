/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-09 13:49:07
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-09 14:24:32
 */

#ifndef COREHANDLER
#define COREHANDLER

#include "_Handler.h"

class CoreHandler : public _Handler
{
public:
    CoreHandler(float value);
    float getValue() override;

private:
    float value;
protected:
};
#include "../source/CoreHandler.cpp"
#endif