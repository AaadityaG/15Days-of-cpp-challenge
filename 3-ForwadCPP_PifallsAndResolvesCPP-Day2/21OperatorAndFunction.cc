#include <iostream>
using namespace std;

unsigned int Multiply(unsigned x, unsigned y)
{
    int prod = 0;
    while (y-- > 0)
        prod += x;
    return prod;
}
int main()
{
    unsigned int a = 2, b = 3;
    // Computed by ’*’ operator
    unsigned int c = a * b; // c is 6
    // Computed by Multiply function
    unsigned int d = Multiply(a, b); // d is 6
    return 0;
}