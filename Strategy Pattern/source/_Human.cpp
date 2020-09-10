/**
 * @ Author: vaydingul
 * @ Create Time: 2020-09-08 20:32:21
 * @ Modified by: vaydingul 
 * @ Modified time: 2020-09-08 21:49:51
 */

void _Human::Run()
{
    this->_runningBehavior->Run();
}

void _Human::Speak()
{
    this->_speakingBehavior->Speak();
}
