#include <iostream>
using namespace std;
// It is UDT(user defined datatype)
class A{  // class - a blueprint for an instance
public:
    A()
    {
        cout<<"The class A..."<<endl;
    }
};

int main()
{    
    A a1;  // object - a class instance
    return 0;
}