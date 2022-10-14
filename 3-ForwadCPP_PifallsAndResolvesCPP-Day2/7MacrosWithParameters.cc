#include <iostream>
using namespace std;
#define SQUARE(x) x*x


int main(void)
{    
    int a = 3, b, d;
    b = SQUARE(a);
    cout<<"Square(a) = "<<b<<endl;

    // pitfalls of macros - 
    // d = SQUARE(a + 1);  // error(output = 7 instead of 16)
    // cout<<"Square(d) = "<<d<<endl;
    
    // trying to fix aboves thing - 
    d = SQUARE(++a);     // fails...
    cout<<"Square(d) = "<<d<<endl;
    return 0;
}

// • SQUARE(x) is a macro with one param 
// • Macro SQUARE(x) is efficient 
// • SQUARE(a + 1) fails 
// • SQUARE(++a) fails 
// • SQUARE(++a) does not check type