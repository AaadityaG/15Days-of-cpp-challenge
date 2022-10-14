#include <iostream>
using namespace std;

int function_for_return_by_value(int &x){
    cout<<"x = "<<x<<" &x = "<<&x<<endl;
    return (x);
}

int main()
{    
    int a = 20;
    cout<<"a = "<<a<<" &a = "<<&a<<endl;
    const int& b = function_for_return_by_value(a);
    cout<<"b = "<<b<<" &b = "<<&b<<endl;
    return 0;
}
