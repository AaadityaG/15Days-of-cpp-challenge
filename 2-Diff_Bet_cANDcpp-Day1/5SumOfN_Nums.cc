#include <iostream>
using namespace std;

int main()
{    
    int a, k, sum = 0;
    cout<<"How many numbers you will enter? :"<<endl;
    cin>>a;
    cout<<"Now enter the numbers for "<<a<<" times:"<<endl;
    for (int i = 0; i < a; i++)
    {
        cin>>k;
        sum = sum + k;
    }
    cout<<"Sum of given numbers = "<<sum<<endl;
    
    return 0;
}