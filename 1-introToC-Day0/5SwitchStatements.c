#include <stdio.h>

int main()
{
    int roll_n;
    printf("Enter your roll no from 1 to 10:");
    scanf("%d", &roll_n);

    switch (roll_n)
    {
    case 1:
        printf("Your roll no. is %d", roll_n);
        break;   
    case 2:
        printf("Your roll no. is %d", roll_n);
        break;   
    case 3:
        printf("Your roll no. is %d", roll_n);
        break;   
    case 4:
        printf("Your roll no. is %d", roll_n);
        break;   
    case 5:
        printf("Your roll no. is %d", roll_n);
        break;  
    case 6:
        printf("Your roll no. is %d", roll_n);
        break;  
    case 7:
        printf("Your roll no. is %d", roll_n);
        break;   
    case 8:
        printf("Your roll no. is %d", roll_n);
        break;   
    case 9:
        printf("Your roll no. is %d", roll_n);
        break;
    case 10:
        printf("Your roll no. is %d", roll_n);
        break;
    
    default:
        printf("Enter the valid no...");
        break;
    }
    return 0;
}