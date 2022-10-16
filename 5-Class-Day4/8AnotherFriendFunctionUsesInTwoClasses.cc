#include <iostream>
using namespace std;

class B;  //  always good to declare - forward declaration

class A{
    int a = 10;
public:
    void getFromA(){
        cout<<"int a from A = "<<a<<endl;
    }
    friend void display(const A& s, const B& s1);
};

class B{
    int b = 20;
public:
    void getFromB(){
        cout<<"int b from B = "<<b<<endl;
    }
    friend void display(const A& s, const B& s1);
};  


// a friend function which uses objects of both class 
void display(const A& s, const B& s1){
    cout<<"From A int = "<<s.a<<endl;
    cout<<"From B int = "<<s1.b<<endl;
}

int main()
{    
    A a1;
    B b1;
    display(a1, b1);
    return 0;
}