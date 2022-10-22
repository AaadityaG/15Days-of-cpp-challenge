// Overall diff - is that dcl gives the accurate
#include <iostream>
#include <typeinfo>
#include "gettype.hpp"

using namespace std;
int main()
{
    int a = 5;        // int
    int &b = a;       // int&
    const int c = 7;  // const int
    const int &d = c; // const int&
    // auto never deduces adornments like cv-qualifer or reference
    auto a_auto = a; // int
    auto b_auto = b; // int
    auto c_auto = c; // int
    auto d_auto = d; // int

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;

    // cv-qualifer or reference needs to be explicitly added
    auto &b_auto_ref = a;        // int&
    const auto c_auto_const = a; // const int
    // decltype deduces the complete type of the expression
    decltype(a) a_dt;     // int // [C++14] decltype(auto) a_dt_auto = a; // int
    decltype(b) b_dt = b; // int& // [C++14] decltype(auto) b_dt_auto = b; // int&
    decltype(c) c_dt = c; // const int // [C++14] decltype(auto) c_dt_auto = c; // const int
    decltype(d) d_dt = d; // const int& // [C++14] decltype(auto) d_dt_auto = d; // const int&


    // Note - below is defined the type_name is not in c++11 it is created in custome headerfile
    cout << type_name<decltype(a_dt)>() << '\n';
    cout << type_name<decltype(b_dt)>() << '\n';
    cout << type_name<decltype(c_dt)>() << '\n';
    cout << type_name<decltype(d_dt)>() << '\n';

    return 0;
}
