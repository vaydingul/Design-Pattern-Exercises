#include <iostream>

class Shape
{
public:
    int edge = 4;
};

class Square : public Shape
{
public:
};

int main()
{
    
    
    /**
    Square *sqr;
    std::cout << sqr->edge;  It does not work because we only created pointer, but we did not specified an actual entity.
    **/

   /**
    Square sqr;
    std::cout << sqr.edge;  It does work because we created variable and allocated in the system.
    **/

   /**
    Shape *sqr = new Square();
    std::cout << sqr->edge;  It also works because it is obvious.
    **/
}
