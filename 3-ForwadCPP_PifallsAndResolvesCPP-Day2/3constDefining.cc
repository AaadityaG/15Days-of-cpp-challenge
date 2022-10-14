#include <iostream>
using namespace std;

const int TWO = 2;   // const always needs to initialize...
const double PI = 3.1415;  // constant

// #define TWO 2        // manifest constant...
// #define PI 3.1415

// const int null = 0;    // null is always a manifest constant... 

const int nArray = 100;  // const can be useful for also defining size of arrays and other DTs 

int main()
{    
    int r = 10;
    double peri = TWO * PI * r;
    cout<<"Perimeter = "<<peri<<endl;
    return 0;
}