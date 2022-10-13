#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = " world!";
    char str[20];
    strcpy(str, str1);  // Copy string (function)
    strcat(str, str2);  // Append characters from string (function)
    printf("%s\n", str);
    return 0;
}