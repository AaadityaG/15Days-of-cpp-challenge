#include <iostream>
using namespace std;

int IdentityFunction(int a = 10, int b = 10, int c = 10){
    cout<<a<<" "<<b<<" "<<c;
}

int main()
{    
    int x = 5, y, z;
    IdentityFunction(x);
    return 0;
}