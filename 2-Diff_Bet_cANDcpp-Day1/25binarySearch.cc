#include <iostream>
#include <algorithm> // binary_search function
using namespace std;
int main()
{
    int data[] = {1, 2, 3, 4, 5}, k = 3;
    if (binary_search(data, data + 5, k))
        cout << "found!\n";
    else
        cout << "not found\n";
}
