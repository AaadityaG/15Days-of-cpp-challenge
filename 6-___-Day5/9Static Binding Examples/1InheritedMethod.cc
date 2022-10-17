#include <iostream>
using namespace std;

class B
{
public:
    void f() { cout<<"B::f()"<<endl; }
};

class D : public B
{
public:
    void g() { cout<<"D::g()"<<endl; } // new function
};

int main()
{
    B b;
    D d;
    b.f(); // B::f()
    d.f(); // B::f() ----- Inherited
    d.g(); // D::g() ----- Added
}