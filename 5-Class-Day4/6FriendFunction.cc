#include <iostream>
using namespace std;

class Myclass{
    int data_;
public:
    Myclass(int i) : data_(i){ }
    friend void display(const Myclass& a);
};

void display(const Myclass& a){
    cout<<"data = "<<a.data_<<endl;  // will give an error without friend function...
}

int main()
{    
    Myclass obj(10);
    display(obj);
    return 0;
}

/*
A friend function of a class - 
[imp]->has access to the private and protected members of the class (breaks the
      encapsulation) in addition to public members
    must have its prototype included within the scope of the class prefixed with the
      keyword friend
    does not have its name qualified with the class scope
    is not called with an invoking object of the class
    can be declared friend in more than one classes

*/