

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char * str = strdup("IIT, Kharagpur");
    str[0] = 'N'; // Edit the name
    cout << str << endl;
    str = strdup("JIT, Kharagpur"); // Change the name
    cout << str << endl;

    // to stop editing the name:
    // const char *str = strdup("IIT, Khadagpur");
    // str[0] = 'N';                     // error
    // str = strdup("JIT, Khadagpur");     // okay

    // to stop changing the name:
    // char *const str = strdup("IIT, Khadagpur");
    // str[0] = 'N';                     // okay
    // str = strdup("JIT, Khadagpur");   // error

    // to stop both:
    const char * const str = strdup("IIT, Kharagpur");
    str[0] = 'N';                        // Error
    str = strdup("JIT, Kharagpur");      // Error

    return 0;
}