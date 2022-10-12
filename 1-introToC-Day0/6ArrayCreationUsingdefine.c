#include <stdio.h>
#define SIZE 10
int main()
{
    // declaring array
    int name[SIZE];
    double balance[10];

    // initializing array
    // int primes[] = {2, 3, 5, 7, 11};
    // int sizeOfPrimes = sizeof(primes)/sizeof(int);
    // int primes[5] = {2, 3, 5, 7, 11};
    // int primes[5] = {2, 3}; 
    // int EvenPrime = primes[0];
    // primes[2] = 5;

    // Multidimensional arrays - 
    int mat[2][2] = {{1, 2}, {4, 3}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // mat[i][j] = i + j;
            printf("%d ", mat[i][j]);
        }
    }
    
    return 0;
}