#include <stdio.h>
void swap(int *, int *); // Call-by-address
int main()
{
    int a = 10, b = 15;
    printf("a= %d & b= %d to swap\n", a, b);
    // swap(&a, &b); //            Right 
    // swap(a, b); //            Wrong
    printf("a= %d & b= %d on swap\n", a, b);
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}