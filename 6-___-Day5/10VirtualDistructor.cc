// A program with virtual destructor
#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout << "Constructing base\n";
    }
    virtual ~base()
    {
        cout << "Destructing base\n";
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Constructing derived\n";
    }
    virtual ~derived()
    {
        cout << "Destructing derived\n";
    }
};

// Making base class destructor virtual guarantees that the object of derived class is destructed properly, 
// i.e., both base class and derived class destructors are called. 

int main()
{
    derived *d = new derived();
    base *b = d;
    delete b;
    // getchar();
    return 0;
}
