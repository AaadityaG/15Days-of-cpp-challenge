#include <iostream>
using namespace std;

int Add(int a, int b)
{
    cout<<"int sum = "<<a+b<<endl;
}

int Add(double a, double b)
{
    cout<<"double sum = "<<a+b<<endl;
}

int Add(int a)
{
    cout<<"int (single param) sum = "<<a+1<<endl;
}

int main()
{    
    Add(3, 5);
    Add(3);
    Add(3.5, 5.22);
    return 0;
}