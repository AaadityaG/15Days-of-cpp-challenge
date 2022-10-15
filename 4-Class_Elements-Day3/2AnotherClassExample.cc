#include <iostream>
using namespace std;

class complex{
public:
    double re, im;
};

int main()
{    
    complex c = { 4.2, 5.3 };
    cout<< c.re << " "<< c.im;
    return 0;
}