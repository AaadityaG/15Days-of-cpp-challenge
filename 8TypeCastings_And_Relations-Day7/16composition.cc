// must -> https://www.slideshare.net/pohjus/c-inheritance-composition-polymorphism-presentation

#include <iostream>
using namespace std;

class Motor{ 
public:
    Motor(){
        cout<<"Motor is created!"<<endl;
    }
    ~Motor(){
        cout<<"Motor is destroyed!"<<endl;
    }
};

class Car{
private:
    Motor* mot;
public:
    Car(){
        mot = new Motor();
        cout<<"Car is created!"<<endl;
    }
    ~Car(){
        cout<<"Car is destroyed!"<<endl;
        delete mot;
    }
};

/*
composition means -
    Relationship between objects, where one object owns or 
    has another object, As you seen above. 
    And when Car is build Motor is build and When Car is destroyed Motor is destroyed...
*/

int main()
{    
    Car c;
    return 0;
}