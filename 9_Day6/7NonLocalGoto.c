#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>

jmp_buf jbuf;
void g()
{
    // bool error = false;
    bool error = true;  // try it
    printf("g() started\n");
    if (error)
        longjmp(jbuf, 1);
    printf("g() ended\n");
    return;
}

int main()
{
    if (setjmp(jbuf) == 0)
    {
        printf("g() called\n");
        g();
        printf("g() returned\n");
    }
    else
        printf("g() failed\n");
    return 0;
}

/*
Code Exaplined - 

setjmp() and longjmp() functions provided in <setjmp.h> Header along with
collateral type jmp buf

• setjmp(jmp buf) -
    ◦ Sets the Jump point filling up the jmp buf object with the current program context
• longjmp(jmp buf, int) -
    ◦ Effects a Jump to the context of the jmp buf object
    ◦ Control return to setjmp call last called on jmp buf

*/