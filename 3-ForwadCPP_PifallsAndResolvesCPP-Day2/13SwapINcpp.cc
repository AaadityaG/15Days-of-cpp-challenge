#include <iostream>
using namespace std;
void swap(int &, int &); // Call-by-reference
int main()
{
    int a = 10, b = 15;
    cout << "a= " << a << " & b= " << b << "to swap" << endl;
    swap(a, b); // Natural call
    cout << "a= " << a << " & b= " << b << "on swap" << endl;
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}