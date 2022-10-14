#include <iostream>
using namespace std;

enum Mytype{ Aditya = 100, Gaikwad = 200 };

Mytype operator+(const Mytype &a, const Mytype &b){
    unsigned int k = a;
    unsigned int l = b;
    unsigned int t = k+l;
    return (Mytype)t;
}

int main()
{    
    Mytype a = Aditya;
    Mytype b = Gaikwad;
    int s = a+b;
    cout<<s;

    return 0;
}