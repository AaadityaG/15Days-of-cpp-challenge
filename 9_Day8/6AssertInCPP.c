// at -> https://www.tutorialspoint.com/c_standard_library/c_macro_assert.htm

// An assert in C++ is a predefined macro using which we can test certain assumptions
// that are set in the program. When the conditional expression in an assert statement
// is set to true, the program continues normally. But when the expression is false, an
// error message is issued and the program is terminated.

#include<assert.h>
#include <stdio.h>
    int main()
{
    int a;
    char str[50];

    printf("Enter an integer value: ");
    scanf("%d", &a);  // try to give value < 10 as a input
    assert(a >= 10);
    printf("Integer entered is %d\n", a);

    printf("Enter string: ");
    scanf("%s", str);
    assert(str != NULL);
    printf("String entered is: %s\n", str);

    return (0);
}
