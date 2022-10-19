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
    }
};

/*
Aggregation means -
    Aggregation is same as composition, condition is -> it is not necessary 
    to delete the created object. 
    Live and let live is its moto...😁
*/

int main()
{    
    Car c;
    return 0;
}