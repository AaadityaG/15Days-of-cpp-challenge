#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter no. of elements ");
    int count, sum = 0, i;
    scanf("%d", &count);
    // Dynamic Memory Allocation (Sets the array size - )
    int *arr = (int *)malloc(sizeof(int) * count);  
    for (i = 0; i < count; i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    printf("Array Sum:%d ", sum);
}