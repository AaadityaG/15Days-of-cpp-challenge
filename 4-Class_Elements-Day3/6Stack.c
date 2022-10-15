#include <stdio.h>

typedef struct Stack{
    char data[100];
    int top;
}Stack;

int main()
{
    Stack s;
    s.top = -1;
    return 0;
}