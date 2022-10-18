#include <iostream>
using namespace std;

class B
{
protected:
    int data_;

public:
    B(int d = 0) : data_(d) { cout << "B::B(int): " << data_ << endl; }
    ~B() { cout << "B::~B(): " << data_ << endl; }
    // ...
};
class D : public B
{
    int info_;

public:
    D(int d, int i) : B(d), info_(i) // ctor-1: Explicit construction of Base
    {
        cout << "D::D(int, int): " << data_ << ", " << info_ << endl;
    }
    D(int i) : info_(i) // ctor-2: Default construction of Base
    {
        cout << "D::D(int): " << data_ << ", " << info_ << endl;
    }
    ~D() { cout << "D::~D(): " << data_ << ", " << info_ << endl; }
};

int main(void){
    // B b;
    D d(5, 2);
    return 0;
}


/*

Constructor-Destructor - 
    -> Derived class does not inherit the Constructors and Destructor of Base class but
       must have access to them
    -> Derived class must provide its own Constructors and Destructor
    -> Derived class cannot override or overload a Constructor or the Destructor of Base
       class

Construction-Destruction - 
    -> A constructor of the Derived class must first call a constructor of the Base class to
       construct the Base class instance of the Derived class
    -> The destructor of the Derived class must call the destructor of the Base class to
       destruct the Base class instance of the Derived class
*/