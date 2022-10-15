#include <iostream>
using namespace std;
int init_m1(int m)
{ // Func. to init m1_
    cout << "Init m1_: " << m << endl;
    return m;
}
int init_m2(int m)
{ // Func. to init m2_
    cout << "Init m2_: " << m << endl;
    return m;
}
class X
{
    // int m1_;
    // int m2_;
    int m2_; // Order of data members swapped
    int m1_;

public:
    X(int m1, int m2) : m1_(init_m1(m1)), // Called 2nd
                        m2_(init_m2(m2))  // Called 1st
    {
        cout << "Ctor: " << endl;
    }
    ~X() { cout << "Dtor: " << endl; }
};
int main()
{
    X a(2, 3);
    return 0;
}

