#include <iostream>
using namespace std;
enum E
{
    C0 = 0,
    C1 = 1,
    C2 = 2
};

E operator+(const E &a, const E &b)
{ // Overloaded operator +
    unsigned int uia = a, uib = b;
    unsigned int t = (uia + uib) % 3; // Redefined addition
    return (E)t;
}
int main()
{
    E a = C1, b = C2;
    int x = -1;
    x = a + b; // Overloaded operator + for enum E
    cout << x << endl;
}
