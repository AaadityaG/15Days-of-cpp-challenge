#include <stdio.h>
typedef struct complex
{
    double re;
    double im;
}c;

int main()
{
    c com;
    struct complex *p = &com;
    (*p).re = 2.5;
    p->im = 3.6;
    printf("re = %lf\n", com.re);
    printf("im = %lf\n", com.im);
    return 0;
}