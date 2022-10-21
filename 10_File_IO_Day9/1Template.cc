#include <iostream>
using namespace std;

// Templates are specifications of a collection of functions or 
// classes which are parameterized by types

template<class T>
T Max(T x, T y){
    return x>y ? x:y;
}
int main()
{    
    int a = 3, b = 5, iMax;
    double c = 2.1, d = 3.7, dMax;

    iMax = Max<int>(a, b);
    cout<<"Max("<<a<<", "<<b<<") = "<<iMax<<endl;

    dMax = Max<double>(c, d);
    cout<<"Max("<<c<<", "<<d<<") = "<<dMax<<endl;

    return 0;
}

/*
As we can see the code of the Max becomes very less 
otherwise we need to create the overloaded functins...
*/
