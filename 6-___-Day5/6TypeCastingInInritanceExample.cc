#include <iostream>
using namespace std;

class A { public: int dataA_; };

class B : public A { public: int dataB_; };

int main()
{    
    A a;
    B b;

    a.dataA_ = 2;
    b.dataA_ = 3;
    b.dataB_ = 5;

    A *pa = &a;
    B *pb = &b;

    cout << pa->dataA_ << endl; // prints 2
    cout << pb->dataA_ << " " << pb->dataB_ << endl; // prints 3 5

    pa = &b;
    cout << pa->dataA_ << endl; // prints 3
    // cout << pa->dataB_ << endl; // error: ’dataB_’ : is not a member of ’A’

    return 0;
}