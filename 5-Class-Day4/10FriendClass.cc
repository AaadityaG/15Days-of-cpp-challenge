#include <iostream>
using namespace std;

/*
Friend class - is a keyword with which we can directly declare the whole class
               as a freind class.
*/

class A{
    int a = 10, b;
public:
    void display()
    {
        cout<<"This is Class A."<<endl;
    }
    friend class B;  // here class A saying compiler that class B is his friend class 
};

class B{
public:
    A a1;
    void display()   // also overloaded...
    {
        cout<< a1.a;
    }
};

int main()
{    
    B b1;
    b1.display();
    return 0;
}