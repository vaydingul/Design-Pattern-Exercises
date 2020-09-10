#include "header/_Handler.h"
#include "header/_Wrapper.h"
#include "header/CoreHandler.h"
#include "header/Wrapper1.h"
#include "header/Wrapper2.h"
#include <iostream>

int main()
{
    float val;
    std::cin>>val;
    _Handler *handler = new Wrapper1( new Wrapper1( new Wrapper1( new CoreHandler(val))));
    std::cout<<handler->getValue();
}