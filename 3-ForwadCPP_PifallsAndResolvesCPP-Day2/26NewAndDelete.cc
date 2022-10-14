#include <iostream>
using namespace std;

int main()
{
    int *p = new int(5);   // create the dynamic allocation
    cout << *p; // Prints: 5
    delete p;   // deletes the allocation
}
