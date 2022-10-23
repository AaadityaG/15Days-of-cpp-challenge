// Initializer List is used in initializing the data members of a class

#include <iostream>
using namespace std;

class A{
private:
    int a;    
    const int b;
    int &t;
    int i;
public:
    // A(int a1): a(a1){ }   // Initializer list 
    // A(int b1): b(b1){ }   // for non-static datamembers...
    // A(int &T): t(T){ }   // for reference members 
};

A::A(int i):i(i){ // instead of using this use initilializer list for initilizing same name variable } 

int main()
{    

    return 0;
}


// Sample could be: 

// // With Initializer List
// class MyClass {
//     Type variable;
// public:
//     MyClass(Type a):variable(a) {   // Assume that Type is an already
//                      // declared class and it has appropriate
//                      // constructors and operators
//     }
// };