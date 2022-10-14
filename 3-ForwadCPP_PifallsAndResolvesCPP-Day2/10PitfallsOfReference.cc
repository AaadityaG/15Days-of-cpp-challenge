#include <iostream>
using namespace std;

int main()
{    
    int i = 2;
    int& j = i;
    const int& k = 5; // const tells compiler to allocate a memory with the value 5
    const int& l = j + k; // Similarly for j + k = 7 for l to refer to
    cout << i << ", " << &i << endl; 
    cout << j << ", " << &j << endl; 
    cout << k << ", " << &k << endl; 
    cout << l << ", " << &l << endl; 
    return 0;
}