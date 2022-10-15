#include <iostream>
using namespace std;
#include "String.h"
class Name
{
    String firstName_, lastName_;

public:
    Name(const char *fn, const char *ln) : firstName_(fn), lastName_(ln) // Uses Ctor of String class
    {
        cout << "Name ctor: ";
        print();
        cout << endl;
    }
    Name(const Name &n) : firstName_(n.firstName_), lastName_(n.firstName_) // Uses CCtor of String class
    {
        cout << "Name cctor: ";
        print();
        cout << endl;
    }
    Name &operator=(const Name &n)
    {
        firstName_ = n.firstName_; // Uses operator=() of String class
        lastName_ = n.lastName_;   // Uses operator=() of String class
        return *this;
    }
    ~Name()
    {
        cout << "Name dtor: ";
        print();
        cout << endl;
    }                  // Uses Dtor of String class
    void print() const // Uses print() of String class
    {
        firstName_.print();
        cout << " ";
        lastName_.print();
    }
};