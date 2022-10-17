#include <iostream>
using namespace std;

class A{ };

class B : public A{ };

int main()
{    
    A *p;        // static type
    p = new B;   // Dynamic type 
    return 0;
}