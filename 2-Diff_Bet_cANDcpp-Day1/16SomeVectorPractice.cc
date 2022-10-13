#include <iostream>
#include <vector>
using namespace std;

int main()
{    
    vector<int> g1;

    cout<<"Enter the size of vector:"<<endl;
    int s;
    cin>>s;
    cout<<"Enter the elements for "<<s<<" times!"<<endl;
    for (int i = 0; i < s; i++)
    {
        int k;
        cin>>k;
        g1.push_back(k);
    }
    cout<<"Your vector elements are:"<<endl;
    for(auto i = g1.begin(); i != g1.end(); i++)
    {
        cout<<*i<<" "; 
    }
    cout<<"\nYour vector elements in reverse are:"<<endl;
    for(auto i = g1.rbegin(); i != g1.rend(); i++)
    {
        cout<<*i<<" "; 
    }


    
    
    return 0;
}