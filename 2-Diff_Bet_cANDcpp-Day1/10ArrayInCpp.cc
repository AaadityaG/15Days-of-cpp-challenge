#include <iostream>
using namespace std;

int main()
{    
    int arr[4];

    arr[0] = 12;
    arr[1] = 10;
    arr[2] = 19;
    arr[3] = 10;

    cout<<"The elements are:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}