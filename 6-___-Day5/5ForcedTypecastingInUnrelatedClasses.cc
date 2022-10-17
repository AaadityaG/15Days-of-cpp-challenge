#include <iostream>
using namespace std;

class A { public: int i; };

class B { public: double d; };

int main()
{    
    A a;
    B b;

    a.i = 5;
    b.d = 7.2;

    A *p = &a;
    B *q = &b;
    cout << p->i << endl; 
    cout << q->d << endl; 

    p = (A*)&b; // Forced casting on pointer: Dangerous
    q = (B*)&a; // Forced casting on pointer: Dangerous
     
    // will give the garbage output- 
    cout << p->i << endl; 
    cout << q->d << endl; 

    return 0;
}