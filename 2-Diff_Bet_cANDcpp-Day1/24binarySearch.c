#include <stdio.h>
#include <stdlib.h> // bsearch function
// compare Function Pointer
int compare(
    const void *a, const void *b)
{ // Type unsafe
    if (*(int *)a < *(int *)b)
        return -1; // Cast needed
    if (*(int *)a == *(int *)b)
        return 0; // Cast needed
    if (*(int *)a > *(int *)b)
        return 1; // Cast needed
}
int main()
{
    int data[] = {1, 2, 3, 4, 5}, k = 3;
    if (bsearch(&k, data, 5, sizeof(int), compare))
        printf("found!\n");
    else
        printf("not found\n");
}