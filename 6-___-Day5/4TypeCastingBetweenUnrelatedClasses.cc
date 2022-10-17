#include <iostream>
using namespace std;

class A
{
    int i;
};

class B
{
    double d;
};

int main()
{
    A a;
    B b;
    A *p = &a;
    B *q = &b;
    // a = b;       // error: binary ’=’ : no operator which takes a right-hand operand of type ’B’
    // a = (A)b;    // error: ’type cast’ : cannot convert from ’B’ to ’A’
    // b = a;       // error: binary ’=’ : no operator which takes a right-hand operand of type ’A’
    // b = (B)a;    // error: ’type cast’ : cannot convert from ’A’ to ’B’
    // p = q;       // error: ’=’ : cannot convert from ’B *’ to ’A *’
    // q = p;       // error: ’=’ : cannot convert from ’A *’ to ’B *’
    p = (A *)&b; // explicit on pointer: type cast is okay for the compiler
    q = (B *)&a; // explicit on pointer: type cast is okay for the compiler
    return 0;
}