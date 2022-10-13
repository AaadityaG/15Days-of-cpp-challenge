
#include <stdio.h>
#include <stdlib.h>
#define MAX 100    // manifest constant
int main()
{
    int arr[MAX], sum = 0, i;
    printf("Enter no. of elements: ");
    int count;
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    printf("Array Sum till %d is: %d", count, sum);
}