#include <iostream>
#include <algorithm>  // add this header for using beloiw sort...
using namespace std;

bool compare(int i, int j){  // A comparison functor.
    return (i>j);
}

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{    
    int data[] = {32, 71, 12, 45, 26};
    // Start ptr., end ptr., func. ptr.
    printArray(data, 5);
    sort(data, data+5, compare);
    printArray(data, 5);
    return 0;   
}