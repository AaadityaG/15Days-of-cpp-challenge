#include <iostream>
using namespace std;

int main()
{    
    int i = 15;
    int &j = i;

    // reference is the variable which becomes address of another one...
    // (ifficial) - A reference is an alias / synonym for an existing variable

    int a = 10, &b = a;
    cout<<"a = "<<a<<", b = "<<b<<". "<<"&a = "<<&a<<", &b = "<<&b<<endl;
    ++a;
    cout<<"After ++a -\n a = "<<a<<", b = "<<b<<endl;
    ++b;
    cout<<"After ++b -\n a = "<<a<<", b = "<<b<<endl;
    // above a and b have the same memory location and hence the same value
    return 0;
}