#include <iostream>
using namespace std;
inline int SQUARE(int x) { return x*x; }

// what inline function do - inline function directly call the whole main memory into 
// function block, computes the calculations and returns the outut...

int main()
{    
    int a = 3, b, d;
    b = SQUARE(a);
    cout<<"Square(a) = "<<b<<endl;

    // pitfalls of macros - 
    // d = SQUARE(a + 1);  // error(output = 7 instead of 16)
    // cout<<"Square(d) = "<<d<<endl;
    
    // trying to fix aboves thing - 
    d = SQUARE(++a);     // works...
    cout<<"Square(d) = "<<d<<endl;
    return 0;
}

// • SQUARE(x) is a macro with one param 
// • Macro SQUARE(x) is efficient 
// • SQUARE(a + 1) works 
// • SQUARE(++a) works 
// • SQUARE(++a) check type