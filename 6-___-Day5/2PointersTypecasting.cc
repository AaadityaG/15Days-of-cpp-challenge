#include <iostream>
using namespace std;

int main()
{
    int i = 1, *p = &i, a[10];
    double d = 1.1, *q = &d;
    void *r;
    // q = p;           // error: cannot convert ‘int*’ to ‘double*’
    // p = q;           // error: cannot convert ‘double*’ to ‘int*’
    q = (double *)p; // Okay
    p = (int *)q;    // Okay
    r = p;           // Okay to convert from ‘int*’ to ‘void*’
    // p = r;           // error: invalid conversion from ‘void*’ to ‘int*’
    p = (int *)r;    // Okay
    p = a;           // Okay by array pointer duality. p[i], a[i], *(p+i), *(a+i) are equivalent
    // a = p;           // error: incompatible types in assignment of ‘int*’ to ‘int[10]’
    return 0;
}