#include <iostream>
using namespace std;

class Uncopyable
{
protected: // allow construction and destruction of derived objects ...
    Uncopyable() {}
    ~Uncopyable() {}

private:
    Uncopyable(const Uncopyable &); // ... but prevent copying
    Uncopyable &operator=(const Uncopyable &);
};

class MyClass : private Uncopyable
{ // class no longer declares copy ctor or copy assign. operator
    // ...
    void ProhibitiveCopy()
    {
        MyClass test1, test2; // Member functions cannot perform copy
        // MyClass test3(test1); // Error 1: ’Uncopyable::Uncopyable’ : cannot access private member
        // test2 = test1;        // Error 2: ’Uncopyable::operator =’ : cannot access private member
    }
};

int main()
{
    MyClass test1, test2; // Global functions cannot perform copy
    // MyClass test3(test1); // Error 1: ’Uncopyable::Uncopyable’ : cannot access private member
    // test2 = test1;        // Error 2: ’Uncopyable::operator =’ : cannot access private member
}

/*
The purpose of aboves Uncopyable and thier implementaion is that 
if we created objects of Myclass is ok buy creating objects that 
are copy another is prevented here. 

Process - (for uncopyable class...)
s1 -> create a base class with protected: constroctor and destructor
      And private: copy constructor of same class object and overloading operator= with its parameter
s2 -> Create your main useable class and derived privately with base class Uncopyable  
      Thats it!
*/