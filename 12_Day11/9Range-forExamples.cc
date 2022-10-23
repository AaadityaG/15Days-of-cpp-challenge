#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5}; // Iterating over whole array
    for (auto i : v)
        cout << i << ' ';
    cout << endl;
    // the initializer may be a braced-init-list
    for (int n : {0, 1, 2, 3, 4, 5})
        cout << n << ' ';
    cout << endl;
    int a[] = {0, 1, 2, 3, 4, 5}; // Iterating over array
    for (int n : a)
        cout << n << ' ';
    cout << endl;
    // Just running a loop for every array element
    for (int n : a)
        cout << "In loop" << ' ';
    cout << endl;
    string str = "PPD"; // Printing string characters
    for (char c : str)
        cout << c << ' ';
    cout << endl;
    map<int, int> MAP({{1, 1}, {2, 4}, {3, 9}}); // Printing keys and values of a map
    for (auto i : MAP)
        cout << ' ' << i.first << ", " << i.second << endl;

    return 0;
}