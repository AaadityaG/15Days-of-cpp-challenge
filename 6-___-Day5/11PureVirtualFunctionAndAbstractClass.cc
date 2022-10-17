#include <iostream>
using namespace std;

/*
Pure virtual function (or abstract function) -
    is a virtual function for which we can have implementation, 
    
    But we must override that function in the derived class,
    otherwise the derived class will also become abstract class.

Abstract class - 
    is a class which consists of atleast one virtual function.  
*/

class Base                     // abstract class
{
    int x;

public:
    virtual void fun() = 0;   // Pure virtual function 
    int getX() { return x; }
};

// This class is using virtual function fun() from aboves class...
class Derived : public Base
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};

int main(void)
{
    Derived d;
    d.fun();
    return 0;
}
