#include <iostream>
using namespace std;

// Using using namespace we can avoid lengthy prefixes

namespace name1
{
    int v11 = 1;
    int v12 = 2;
}
namespace name2
{
    int v21 = 3;
    int v22 = 4;
}
using namespace name1; // All symbols of namespace name1 will be available
using name2::v21;      // Only v21 symbol of namespace name2 will be available
int main()
{
    cout << v11 << endl;        // name1::v11
    cout << name1::v12 << endl; // name1::v12
    cout << v21 << endl;        // name2::v21
    cout << name2::v21 << endl; // name2::v21
    // cout << v22 << endl;        // Treated as undefined

    return 0;
}
