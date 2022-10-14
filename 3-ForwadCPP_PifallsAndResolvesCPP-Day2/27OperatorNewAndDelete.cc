#include <iostream>
#include <cstdlib>
using namespace std;

// C++ also allows operator new() and operator delete() functions to dynamically allocate
// and de-allocate memory

int main()
{    
    int *p = (int *) operator new(sizeof(int));
    *p = 5;
    cout<<*p;
    return 0;
}