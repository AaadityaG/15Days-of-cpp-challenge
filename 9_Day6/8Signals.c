// Use signal to attach a signal
// handler to the abort routine
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
void SignalHandler(int signal)
{
    printf("Application aborting...\n");
}
int main()
{
    typedef void (*SignalHandlerPointer)(int);
    SignalHandlerPointer previousHandler;
    previousHandler = signal(SIGABRT, SignalHandler);
    abort();
    return 0;
}

/*
    Header <signal.h>
    raise()
        Sends a signal to the executing program
    signal()
        Registers interrupt signal handler
        Returns the previous handler associated with the given signal
    Converts h/w interrupts to s/w interrupts
*/