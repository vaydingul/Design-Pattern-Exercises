/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-09 13:49:07
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-09 14:35:01
 */

Wrapper1::Wrapper1(_Handler *_handler)
{
    this->_handler = _handler;
}



float Wrapper1::getValue()
{
    
    return pow(this->_handler->getValue(), 2);
}
