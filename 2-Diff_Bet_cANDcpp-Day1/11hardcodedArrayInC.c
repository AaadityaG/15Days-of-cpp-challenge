#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100], sum = 0, i;
    printf("Enter no. of elements: ");
    int count;
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    printf("Array Sum: %d", sum);
}