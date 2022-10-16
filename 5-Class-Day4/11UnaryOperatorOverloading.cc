#include <iostream>
using namespace std;

class Count{
private:
    int value;
public:
    Count(int a): value(a){
        cout<<"Initialized!"<<endl;
    }
    void operator + (){   // overloading the operator +
        value = value + 10;
    }
    void display(){
        cout<<"Count: "<<value<<endl;
    }
};

int main()
{    
    Count c(100);
    +c;  // we used that overloaded operator...
    c.display();
    return 0;
}

