#include <iostream>
using namespace std;

int main()
{
    // built-in types -
    int i = 2;
    long j;
    double d = 3.7;
    int *pi = &i;
    double *pd = &d;
    void *pv = 0;

    i = d;                    // implicit --warning 
    i = static_cast<int>(d);  // static_cast --okay
    i = (int)d;               // c-style  -- okay 

    d = i;                      // implicit -- okay
    d = static_cast<double>(i); // static_cast -- okay
    d = (double)i;              // C-style -- okay

    pv = pi; // implicit -- okay
    // pi = pv; // implicit -- error
    pi = static_cast<int*>(pv); // static_cast -- okay
    pi = (int*)pv; // C-style -- okay

    // j = pd; // implicit -- error
    // j = static_cast<long>(pd); // static_cast -- error
    j = (long)pd; // (risky)C-style -- okay: sizeof(long) = 8 = sizeof(double*)

    return 0;
}

/*
static cast performs all conversions allowed implicitly (not only those with pointers
to classes), and also the opposite of these. It can:
-> Convert from void* to any pointer type
-> Convert integers, floating-point values to enum types
-> Convert one enum type to another enum type
*/
