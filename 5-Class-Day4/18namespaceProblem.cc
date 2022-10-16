/*
Problem statement -
cstdlib has a function int abs(int n); that returns the absolute value of parameter n
You need a special int abs(int n); function that returns the absolute value of parameter n if n is between -128 and
127. Otherwise, it returns 0

*/

#include <iostream>
#include <cstdlib>
namespace myNS
{
    int abs(int n)
    {
        if (n < -128)
            return 0;
        if (n > 127)
            return 0;
        if (n < 0)
            return -n;
        return n;
    }
}
int main()
{
    std::cout << myNS::abs(-203) << " "
              << myNS::abs(-6) << " "
              << myNS::abs(77) << " "
              << myNS::abs(179) << std::endl;
    // Output: 0 6 77 0
    std::cout << abs(-203) << " " << abs(-6) << " "
              << abs(77) << " " << abs(179) << std::endl;
    // Output: 203 6 77 179
}


/*
use of above namespace is that we use this namespace while we want absolute value between only
0-128. But after that we may need that function so we can use again as we want...
*/ 