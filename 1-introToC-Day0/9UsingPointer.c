#include <stdio.h>

int main()
{
    // int *ip;
    // double *dp;
    // char *cp;
    // float *fp;
    // void *pv;

    int i = 20;
    int *ip;
    ip = &i;
    // printf("Address of variable: %p\n", &i);
    printf("Address of variable: %p\n", ip);
    printf("Value of pointer: %d\n", *ip);
    return 0;
}