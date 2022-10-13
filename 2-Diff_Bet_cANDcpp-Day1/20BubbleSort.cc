#include <iostream>
using namespace std;

void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }        
    }    
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
    int n = 5;  

    printArray(data, n);
    bubbleSort(data, n);
    printArray(data, n);
    
    return 0;
}