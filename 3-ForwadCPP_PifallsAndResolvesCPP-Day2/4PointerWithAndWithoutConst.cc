#include <iostream>
using namespace std;



int main()
{    
    /*
    int m = 10;
    int n = 40;

    int *x = &m;
    int *y = &n;

    n = 4;  // possble
    *y = 44;   // possible

    y = &m; // also possible
    *x = 0;   // also possible...  */ 
    // *Note - it becomes 100% possible to change the non-constant pointers 


    // now lets go for constant pointers and pointies...
    const int n = 5;
    const int *p = &n;

    // n = 7;  // not possible
    // *p = 10; // not possible 

    // And hence this becomes the power of pointers.


    return 0;
}