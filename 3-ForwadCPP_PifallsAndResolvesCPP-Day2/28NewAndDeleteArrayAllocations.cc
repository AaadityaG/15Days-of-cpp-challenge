#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{    
    int *p = new int[3];
    delete [] p;
    return 0;
}