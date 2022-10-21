#include <stdio.h>

typedef struct Complex
{
    double re, im;
} Complex;

int main()
{
    Complex c1 = {2.5, 7.3}, c2 = {4.3, 8.9};
    printf("(%lf, %lf)", c1.re, c1.im); // Need to print component-wise
    printf("; ");
    printf("(%lf, %lf)\n", c2.re, c2.im); // Need to print component-wise
    printf("(%lf, %lf)", c1);             // warning: format ‘%lf’ expects argument of type ‘double’,
    // but argument 2 has type ‘Complex’ {aka ‘struct Complex’}
    // warning: format ‘%lf’ expects a matching ‘double’ argument
    printf("; ");
    printf("(%lf, %lf)\n", c2); // Same as above
}