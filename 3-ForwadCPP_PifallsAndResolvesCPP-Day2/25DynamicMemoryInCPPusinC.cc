#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{       
    int *p = (int *) malloc(5*sizeof(int));
    cout<<"Enter the numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>p[i];
        cout<<": ";
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" ";
    }
    
    return 0;
}