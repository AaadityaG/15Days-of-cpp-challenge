#include <iostream>
using namespace std;

int data = 0;

namespace outer{
    int data = 10;
    namespace inner
    {
        int data = 50;
    } 
}

int main()
{    
    cout<<data<<endl;
    cout<<outer::data<<endl;
    cout<<outer::inner::data<<endl;
    return 0;
}