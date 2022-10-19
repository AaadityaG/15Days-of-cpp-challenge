#include <iostream>
using namespace std;

class Person
{ // data members of person
public:
    Person(int x) { cout << "Person::Person(int)" << endl; }
    Person() { cout << "Person::Person()" << endl; } // Default ctor for virtual inheritance
};

class Faculty : virtual public Person      // virtual base class 
{ // data members of Faculty
public:
    Faculty(int x) : Person(x) { cout << "Faculty::Faculty(int)" << endl; }
};

class Student : virtual public Person     // virtual base class 
{ // data members of Student
public:
    Student(int x) : Person(x) { cout << "Student::Student(int)" << endl; }
};

class TA : public Faculty, public Student
{
public:
    TA(int x) : Student(x), Faculty(x) { cout << "TA::TA(int)" << endl; }
};

int main(){
    TA ta(30);
    return 0;
}