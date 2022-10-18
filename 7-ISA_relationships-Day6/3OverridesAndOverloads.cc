#include <iostream>
#include <cstring>
using namespace std;

class B{
public:
    void f(int i){
        cout<<"B::f()"<<endl;
    };
    void g(int i){
        cout<<"B::g()"<<endl;
    }
};

class D : public B{
public:
    void f(int i){     // overridden 
        cout<<"Overriden B::f(int i)"<<endl;
    }
    void f(string&){   // overloaded 
        cout<<"Overloaded D::f(string&)"<<endl;
    };
    void h(int i){
        cout<<"D::h(int i)"<<endl;
    }
};

int main()
{    
    B b;
    D d;

    d.f(10);
    d.g(10);

    b.f(10);
    b.g(10);

    string a = "Aditya";
    d.f(a);

    return 0;
}