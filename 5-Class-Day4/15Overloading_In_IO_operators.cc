#include <iostream>
using namespace std;
class Complex
{
public:
    double re, im;
    Complex(double r = 0, double i = 0) : re(r), im(i) {}
};
ostream &operator<<(ostream &os, const Complex &a)
{
    os << a.re << " +j " << a.im << endl;
    return os;
}
istream &operator>>(istream &is, Complex &a)
{
    is >> a.re >> a.im;
    return is;
}
int main()
{
    Complex d;
    cout<<"Give an inputs: "<<endl;
    cin >> d;
    cout << d;
}

// IMP-
// // Global function - 
// ostream& operator<< (ostream& os, const Complex &a);
// // Member function in ostream - 
// ostream& ostream::operator<< (const Complex &a);
// // Member function in Complex - 
// ostream& Complex::operator<< (ostream& os);