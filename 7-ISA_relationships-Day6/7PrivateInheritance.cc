#include <iostream>
using namespace std;

class Person{ };

class Student : private Person{ };

void eat(const Person &p){
    cout<<"Only person can eat!"<<endl;
}    
void study(const Student &s){
    cout<<"Only student can study!"<<endl;
} 

int main(void)
{
    Person p;                    
    Student s; 

    eat(p);                       // fine, p is a Person
    // eat(s);                    // not okay, error

    study(s);     // okay
    // study(p); // error! p isn’t a Student

    return 0;
}