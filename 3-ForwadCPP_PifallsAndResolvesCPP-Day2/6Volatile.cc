#include <iostream>
using namespace std;



int main()
{    
    // int value = 0;
    // value++;
    // cout<<"value increment without volatile = "<<value<<endl;
    volatile int value = 0;
    value++;
    cout<<"value increment with volatile = "<<value<<endl;

    // using volatile means - the value of the any variable can be change even without we 
    // intend to change it.(eg. with increments). Volatile helps to compiler to not use the changer
    // value and to use the proper actual value of that variable...

    return 0;
}