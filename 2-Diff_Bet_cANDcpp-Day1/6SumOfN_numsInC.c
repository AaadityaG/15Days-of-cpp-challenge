#include <stdio.h>

int main()
{
    int a, k, sum = 0;
    printf("How many numbers you will enter? :");
    scanf("%d", &a);
    printf("Now enter the numbers for %d times:\n", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &k);
        sum = sum + k;
    }
    printf("Sum of given numbers = %d", sum);
    
    return 0;
}