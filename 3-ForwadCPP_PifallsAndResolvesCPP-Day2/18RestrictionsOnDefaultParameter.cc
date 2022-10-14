#include <iostream>
using namespace std;
#include "18myFunc.h" 

// Default parameters to be supplied only in a header
// file and not in the definition of a
// function

void g(int i, double d, char c)
{
    cout << i << ' ' << d << ' ' << c << endl;
} 
int main()
{
    int i = 5;
    double d = 1.2;
    char c = 'b';
    g();        // Prints: 0 0 a
    g(i);       // Prints: 5 0 a
    g(i, d);    // Prints: 5 1.2 a
    g(i, d, c); // Prints: 5 1.2 b
}
