#include <iostream>
// to use the c headers we can use:
// #include <cstdio>
// #include <cmath>
// #include <cstdlib>

using namespace std;
// To use c int c++ demonstrate extern "C"
extern "C"
{
    int printf(const char *format, ...);
}

// Driver Code
int main()
{
    printf("GeeksforGeeks");
    return 0;
}


/* 
    wrappers for C++ data members, member functions, and overloaded
    functions for use with C  
*/

// #ifdef __cplusplus
// extern "C"
// {
// #endif
// // Declarations of this file
// #ifdef __cplusplus
// }
// #endif