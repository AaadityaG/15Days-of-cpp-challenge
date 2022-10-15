#include <iostream>
using namespace std;

class Employee{
    int _a, _b;
public:
    void set(int a, int b){
        _a = a;
        _b = b;
    };
    void get()
    {
        cout<<"_a = "<<_a<<endl;
        cout<<"_b = "<<_b<<endl;
    }
};

int main()
{    
    Employee e;
    e.set(3, 5);
    // cout<<e._a;   // not accesible
    // cout<<e._b;
    e.get();   // but it is possible in that way...
    return 0;
}