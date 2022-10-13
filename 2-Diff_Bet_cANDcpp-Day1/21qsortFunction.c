#include <stdio.h>
#include <stdlib.h>  // also add this 

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        printf(" ");
    }
    printf("\n");
}

int compare(const void *a, const void *b)  // creating this is neccessory for using qsort 
{                                   
    return(*(int *)a < *(int *)b); // Cast needed
}

int main()
{
    int data[] = {20, 4, 23, 6, 1};
    printArray(data, 5);
    qsort(data, 5, sizeof(int), compare);
    printArray(data, 5);
    return 0;
}