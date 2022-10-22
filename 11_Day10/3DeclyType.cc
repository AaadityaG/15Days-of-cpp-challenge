#include <iostream>
#include <typeinfo>
using namespace std;

int main()  
{    
    int a = 3;
    const int& b = 4;
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    
    decltype(b) k = 4;
    cout<<typeid(k).name()<<endl;
    return 0;
}