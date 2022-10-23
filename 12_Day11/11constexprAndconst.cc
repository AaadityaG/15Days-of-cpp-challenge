#include <iostream>
constexpr int m = 100; // Okay: m is 100: compile-time constant
// const will also work
void f(int n)
{
    constexpr int c1 = m + 1; // Okay: c1 is 101: compile-time constant
    // constexpr int c2 = n + 1; // Error: n is not compile-time constant
    const int c2 = n + 1; // Okay: but value of c2 cannot be changed
    // constexpr int c3 = c2 + 1; // Error: c2 is not compile-time constant
    const int c3 = c2 + 1;                                  // Okay: but value of c3 cannot be changed
    std::cout << c1 << ' ' << c2 << ' ' << c3 << std::endl; // 101 11 12
}
int main() { f(10); }