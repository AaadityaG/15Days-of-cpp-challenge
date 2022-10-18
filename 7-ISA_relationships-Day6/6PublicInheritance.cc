#include <iostream>
using namespace std;

class Person{ };

class Student : public Person{ };

void eat(const Person &p){
    cout<<"Anyone can eat!"<<endl;
}    
void study(const Student &s){
    cout<<"Only student can study!"<<endl;
} 

int main(void)
{
    Person p;                     // p is a Person
    Student s; 

    eat(p);                       // fine, p is a Person
    eat(s);                       // fine, s is a Student,

    study(s);     // okay
    // study(p); // error! p isn’t a Student

    return 0;
}