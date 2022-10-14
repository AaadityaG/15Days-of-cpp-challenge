#include <iostream>
using namespace std;

void Function_under_param_test( int &, int);                       
int main()
{
    int a = 20;
    cout << "a = " << a << ", &a = " << &a << endl
         << endl;
    Function_under_param_test(a, a); // Function call
}
// Below parameter b is call by reference where c is just call by value
void Function_under_param_test(int &b, int c)// Function definition
{ 
    cout << "b = " << b << ", &b = " << &b << endl << endl;
    cout << "c = " << c << ", &c = " << &c << endl << endl;
}