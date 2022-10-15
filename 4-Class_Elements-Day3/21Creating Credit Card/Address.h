#include <iostream>
using namespace std;
#include "String.h"
class Address
{
    unsigned int houseNo_;
    String street_, city_, pin_;

public:
    Address(unsigned int hn, const char *sn, const char *cn, const char *pin) : // Uses Ctor of String class
    houseNo_(hn), street_(sn), city_(cn), pin_(pin)
    {
        cout << "Address ctor: ";
        print();
        cout << endl;
    }
    Address(const Address &a) : // Uses CCtor of String class
    houseNo_(a.houseNo_), street_(a.street_), city_(a.city_), pin_(a.pin_)
    {
        cout << "Address cctor: ";
        print();
        cout << endl;
    }
    Address &operator=(const Address &a)
    { // Uses operator=() of String class
        houseNo_ = a.houseNo_;
        street_ = a.street_;
        city_ = a.city_;
        pin_ = a.pin_;
        return *this;
    }
    ~Address()
    {
        cout << "Address dtor: ";
        print();
        cout << endl;
    } // Uses Dtor of String class
    void print() const
    { // Uses print() of String class
        cout << houseNo_ << " ";
        street_.print();
        cout << " ";
        city_.print();
        cout << " ";
        pin_.print();
    }
};
