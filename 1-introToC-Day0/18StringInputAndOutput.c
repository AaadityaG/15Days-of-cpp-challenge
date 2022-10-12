#include <stdio.h>
#include <stdlib.h> // for itoa()
int main()
{
    // Parsing a string
    char instring[] = "C++ Programming"; // Input string
    char str1[20], str2[20];             // Parsed strings
    // Read and tokeninze
    sscanf(instring, "%s %s", str1, str2); // Tokeninze by space
    printf("Input to be parsed = \n\t%s\n", instring);
    printf("Token 1 = %s\n", str1);
    printf("Token 2 = %s\n\n", str2);
    // int to ascii conversion and parsing a number
    int i = 786;
    char num[10];          // number and array for digits
    sprintf(num, "%d", i); // convert a number (decimal) to string
    printf("Number %d has digits ", i);
    printf("%c %c %c\n\n", num[0], num[1], num[2]);
    printf("itoa(%d) = %s\n", i, itoa(i, num, 10)); // extract digits
}