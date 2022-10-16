#include <iostream>
using namespace std;

class Myclass{
    static int x;
public:
    void get(){
        ++x;
    }
    void print(){
        cout<<"x = "<<x<<endl;
    }
    // void getX(void)  // non-static function 
    // static functions cannot access the non-static data...
    static void getX(void)    // static function
    {
        cout<<"In getx -> x = "<<x<<endl;
    }
};

int Myclass::x = 0;

int main()
{    
    Myclass obj1, obj2, obj3;
    obj1.get();
    obj1.print();    
    // obj1.getX();     // non-static member functions declaration...
    Myclass::getX();     // static member functions declaration...

    obj2.get();
    obj2.print();    
    // obj1.getX();    
    Myclass::getX();

    obj3.get();
    obj3.print();    
    // obj1.getX();    
    Myclass::getX();

    return 0;
}
