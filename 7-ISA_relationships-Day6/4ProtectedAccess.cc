#include <iostream>
using namespace std;

class B{
protected:
    int data_ = 10;
public:
    
    void print(){
        cout<<"B Object: ";
        cout<<data_<<endl;
    }
};

class D : public B{
    int info_ = 20;
public:

    void print(){
        cout<<"D Object: ";
        cout<<data_<<", ";
        cout<<info_<<endl;
    }
};

int main()
{    
    B b;
    b.print();

    D d;
    d.print();
    return 0;
}

/*
Hence, accessing the protected data is possible for 
derived class. Even it is only possible for derived class.
*/