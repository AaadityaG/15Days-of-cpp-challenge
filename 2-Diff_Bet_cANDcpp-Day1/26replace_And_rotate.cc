#include <iostream>
#include <algorithm>
using namespace std;

int main()
{    
    int data[] = {1, 2, 3, 4, 5, 6};
    cout<<"Before replacing"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl<<"After replacing"<<endl;
    replace(data, data+5, 3, 2);
    for (int i = 0; i < 5; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl<<"After rotating:"<<endl;
    rotate(data, data+1, data+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<data[i]<<" ";
    }
    
    return 0;
}