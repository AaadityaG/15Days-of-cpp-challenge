#include <iostream>
using namespace std;

class A{
    int a, b;
public: 
    void setval(int a, int b){
        this->a = a;   // here withour this pointer it is not able to identify the actual variable to be set.
        this->b = b;
    }
    void getval()
    {
        cout<<a<<" "<<b<<endl;
    }
};


int main()
{    
    A a;
    a.setval(3, 4);
    a.getval();
    return 0;
}