#include <iostream>
using namespace std;

struct comp
{
    double re, im;
};

comp operator+ (comp &a, comp &b){  // overloaded the + operator 
    comp r;
    r.re = a.re + a.re;
    r.im = a.im + a.im;
    return r;
}

int main()
{    
    comp d1 , d2 , d;
    d1.re = 10.5; d1.im = 12.25;
    d2.re = 20.5; d2.im = 30.25;
    d = d1 + d2; // using Overload operator +
    cout << "Real:" << d.re << ", ";
    cout << "Imag:" << d.im;

    return 0;
}


/*
operator+ is overloaded to perform addition of two
complex numbers which are of struct complx type
*/