#include <stdio.h>
#include <stdlib.h>
static void atexit_handler_1(void)
{
    printf("within \'atexit_handler_1\'\n");
}
static void atexit_handler_2(void)
{
    printf("within \'atexit_handler_2\'\n");
}
int main()
{
    atexit(atexit_handler_1);
    atexit(atexit_handler_2);
    exit(EXIT_SUCCESS);
    printf("This line should never appear\n");
    return 0;
}

/*
• Program Halting Functions provided by
    ◦ <stdlib.h>/<cstdlib>
• abort()
    ◦ Catastrophic Program Failure
• exit()
    ◦ Code Clean up via atexit() Registrations
• atexit()
    ◦ Handlers called in reverse order of their Registrations
*/