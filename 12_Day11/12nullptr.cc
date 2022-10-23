// nullptr is a literal denoting the null poi

#include <iostream>
using namespace std;

// template <class T>

template <typename F, typename P> // Forwarding template
void logAndCall(F func, P param)
{
    func(param); // make log entry ..., then invoke func on param
}

int main()
{
    int *q = nullptr;    // q is null
    char *p = nullptr;   // p is null
    char *p1 = 0;        // 0 still works, p1 is null and p == p1
    char *p2 = NULL;     // p2 is null
    if (p)               // compiles but fails
        if (p == p1)     // compiles and succeeds
            // if (q == p2) // error: comparison between distinct pointer types int* and char*
    // void g(int);
    // g(nullptr);      // error: nullptr is not an int. cannot convert std::nullptr_t to int
    // int i = nullptr; // error: nullptr is not an int. cannot convert std::nullptr_t to int
    void f(int);
    void f(int *);                    // Function overload resolution
    f(0);                             // call f(int)
    f(nullptr);                       // call f(int*)
    // f(NULL);                          // error: call of overloaded f(NULL) is ambiguous for f(int) and f(int*)
    void h(int *);                    // h(0) and h(nullptr) are okay
    // logAndCall(h, 0);       // error: P deduced as int, and h(int) invalid
    // logAndCall(h, NULL);    // error: P deduced as long int, and h(long int) invalid
    logAndCall(h, nullptr); // P deduced as std::nullptr_t, and h(std::nullptr_t) is okay
    return 0;
}