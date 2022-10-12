#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *) malloc(3*sizeof(int));
    printf("%x\n", *p);
    free(p);
    return 0;
}