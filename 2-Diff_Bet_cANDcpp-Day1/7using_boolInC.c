// #include <stdio.h>
// #define TRUE 1
// #define FALSE 0
// int main()
// {
//     int x = TRUE;
//     printf("bool is %d\n", x);
//     return 0;
// }


// standard way -  
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool x = true;
    bool y = false;
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if(a>100)
        printf("Returning:%d", x);
    else
        printf("Returnring %d", y);
    return 0;
}