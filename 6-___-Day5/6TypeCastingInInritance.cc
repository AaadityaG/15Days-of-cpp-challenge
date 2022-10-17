#include <iostream>
using namespace std;

class A { };
class B : public A { };

int main()
{    
    A *pa = 0;
    B *pb = 0;

    void *pv = 0;

    pa = pb; // UPCAST: Okay
    // pb = pa; // DOWNCAST: error: ’=’ : cannot convert from ’A *’ to ’B *’

    pv = pa; // Okay, but lose the type for A * to void *
    pv = pb; // Okay, but lose the type for B * to void *

    // pa = pv; // error: ’=’ : cannot convert from ’void *’ to ’A *’
    // pb = pv; // error: ’=’ : cannot convert from ’void *’ to ’B *’
    
    return 0;
}