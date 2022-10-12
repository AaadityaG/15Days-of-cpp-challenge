#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *) malloc(sizeof(int)*3);
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    printf("p[1] = %d", *(p+1));
    free(p);
    return 0;
}