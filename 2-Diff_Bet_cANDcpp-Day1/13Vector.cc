#include <iostream>
#include <vector>
using namespace std;
#define MAX 100
int main()
{    
    vector<int> v1(MAX);
    cout<<"Enter the no. of elements: ";
    int count, sum = 0;
    cin>>count;
    cout<<"Enter the elements:"<<endl;
    int l;
    for (int i = 0; i < count; i++)
    {
        cin>>l;
        v1[i] = l; 
        // sum += v1[i];
    }
    cout<<endl<<"Your vector consists:"<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<" "<<v1[i];
    }
    
    return 0;
}