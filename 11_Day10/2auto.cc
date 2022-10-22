#include <iostream>
#include <list>
#include <cstdio>
#include <vector>
#include <typeinfo>
using namespace std;

int main()
{   
    list<int> li; 

    auto x = 1;
    auto y = 'c';
    // auto z = {1, 2, 3, 4};
    auto z = li;
    auto k = 2.200;

    cout<<typeid(x).name()<<endl;  // prints i stands for int...
    cout<<typeid(y).name()<<endl;   // prints c stands for char...
    cout<<typeid(z).name()<<endl;
    cout<<typeid(k).name()<<endl;   // d stands for double ...

    // template<class T, class U> void multiply(const vector<T>& vt, const vector<U>& vu) {
    //     auto tmp = vt[i]*vu[i]; // Compiler knows the type of tmp: product of T by a U
    // }

    return 0;
}