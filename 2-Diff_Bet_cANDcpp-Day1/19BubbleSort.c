#include <stdio.h>

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

void AdaptableBsort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        printf("Pass no. %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j < n-i-1; j++)
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }       
    }  
}

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        printf(" ");
    }
    printf("\n");
}

int main()
{
    int data[] = {32, 71, 12, 45, 26};
    int n = 5;  

    // printArray(data, n);
    // bubbleSort(data, n);
    // printArray(data, n);

    int Sdata[] = {1, 2, 3, 4, 5};
    printArray(Sdata, n);
    AdaptableBsort(Sdata, n);
    printArray(Sdata, n);
    
    return 0;
}