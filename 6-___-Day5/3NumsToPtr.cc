#include <iostream>
using namespace std;

int main()
{
    int i, *p = 0;
    long j;

    // sizeof(i) = sizeof(int) = 4
    // sizeof(j) = sizeof(long) = 8
    // sizeof(p) = sizeof(int*) = sizeof(void*) = 8
    
    // i = p;        // error: invalid conversion from ‘int*’ to ‘int’
    // p = i;        // error: invalid conversion from ‘int’ to ‘int*’
    // i = (int)p;      // error: cast from ‘int*’ to ‘int’ loses precision
    p = (int *)i;    // warning: cast to pointer from integer of different size
    j = (long)p;     // Okay
    p = (int *)j;    // Okay

    /*
        the conversion should be done between int* and long and not between int* and int
    */

    return 0;
}