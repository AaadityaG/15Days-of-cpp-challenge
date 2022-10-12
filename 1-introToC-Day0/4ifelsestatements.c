#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if(age < 70 && age > 17)
    {
        printf("You are allowed to drive!");
    }
    else{
        printf("You are not allowed");
    }
    return 0;
}