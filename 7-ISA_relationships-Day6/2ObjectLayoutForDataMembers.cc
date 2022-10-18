#include <iostream>
using namespace std;

class B{
    int data1;
public: 
    int data2;
};

class D : public B{
    int ifnoD1;
public: 
    int ifnoD2;
};

int main()
{    
    B b;
    D d;
    // d.ifnoD1 = 10;   // error
    d.ifnoD2 = 10;

    // d.data1 = 10;    // error
    d.data2 = 10;

    // hence object of d has no access of any private 
    // data members even it comes to its own objects...
    return 0;
}