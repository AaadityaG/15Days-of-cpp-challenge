#include <errno.h>
#include <math.h>
#include <stdio.h>
int main()
{
    double x = -19.9, y, result;
    errno = 1;
    result = pow(x, y);
    if (errno == EDOM)
        printf("Domain error on x/y pair \n");
    else if (errno == ERANGE)
        printf("range error in result \n");
    else
        printf("x to the y = %d \n", (int)result);
}

/*
errno - is a preprocessor macro used for error indication.

EDOM – Domain error: Some mathematical functions are only defined for certain 
    real values, which is called its domain, for example, the square root and log function 
    is only defined for non-negative numbers so if we pass negative argument in these function 
    they set errno to EDOM

ERANGE – Range error: The range of values that can be represented by a variable is limited. For
    example, mathematical functions such as pow can easily outbound the range representable by a
    floating point variable, or functions such as strtod can encounter sequences of digits longer
    than the range representable values. In these cases, errno is set to ERANGE.

*/