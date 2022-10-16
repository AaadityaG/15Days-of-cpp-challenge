#include <iostream>
using namespace std;

namespace MyNameSpace{   // Creating namespace...
    int myData;
    void myFunction(){
        cout<<"MyNameSpace Function..."<<endl;
    }
    class Mycls{
        int data;
    public:
        Mycls(int d) : data(d){ };
        void display(){
            cout<<"Mycls data = "<<data<<endl;
        }
    };
}

int main()
{    
    MyNameSpace::myData = 10;
    cout<<"MyNameSpace data = "<<MyNameSpace::myData<<endl;

    MyNameSpace::myFunction();

    MyNameSpace::Mycls obj(20);
    obj.display();
    return 0;
}


/*
namespace is used to organize the logical gruops and to prevent name collisions that can be 
occur especially when your code base includes multiple libraries
*/