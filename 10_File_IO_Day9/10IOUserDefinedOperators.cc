#include <iostream>
using namespace std;
class Complex
{
    double re, im; // Encapsulated
public:
    Complex(double r = 0.0, double i = 0.0) : re(r), im(i) {}
    friend ostream &operator<<(ostream &os, const Complex &c)
    { // UDT Specific print function
        cout << "(" << c.re << ", " << c.im << ")";
        return os;
    }
    friend istream &operator>>(istream &os, Complex &c)
    { // UDT Specific scan function
        cin >> c.re >> c.im;
        return os;
    }
};
int main()
{
    Complex c1 = {2.5, 7.3}, c2(4.3, 8.9), c3, c4;
    cout << c1 << "; " << c2 << endl; // Cascading the printing: (2.5, 7.3); (4.3, 8.9)
    cout << c3 << "; " << c4 << endl; // Cascading the printing: (0, 0); (0, 0)
    cin >> c3 >> c4;                  // Cascading the scanning: 1.2 3.7 3.4 9.6
    cout << c3 << "; " << c4 << endl; // Cascading the printing: (1.2, 3.7); (3.4, 9.6)
}