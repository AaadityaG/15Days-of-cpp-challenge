#include <iostream>
using namespace std;

/*
So overall behaviour of const_cast is:
1 -> to convert the other 
*/

class A{
    int i_;
public:
    A(int i): i_(i){ }
    int get() const {   // constant function
        return i_;
    }
    void set(int j){
        i_ = j;
    }
};

void print(char *str){
    cout<<str;
}

int main()
{    
    const char * c = "Sample text";

    print(const_cast<char *>(c));  // const operator used for tranformed from char to char *

    const A a(1);
    a.get();
    // a.set(4);  // error because set is trying to changing the const variable 

    const_cast<A&>(a).set(5);    // now okay

    // const_cast<A>(a).set(5);    // also not ok - convert from ’const A’ to ’A’
    

    return 0;
}