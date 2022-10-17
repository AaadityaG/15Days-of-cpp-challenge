#include <iostream>
using namespace std;
class A
{
public:
    void f() { cout<<"A::f()"<<endl; }
};

class B : public A
{
public:
    // To overload, rather than hide the base class function f(),
    // it is introduced into the scope of B with a using declaration
    using A::f;
    void f(int) { cout<<"B::f()"<<endl; } // Overloads f()
};

int main()
{
    B b;    // function calls resolved at compile time
    b.f(3); // B::f(int)
    b.f();  // A::f()
}