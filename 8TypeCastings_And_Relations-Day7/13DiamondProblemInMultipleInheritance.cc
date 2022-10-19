#include <iostream>
using namespace std;

class Person
{ // data members of person
public:
    Person(int x) { cout << "Person::Person(int)" << endl; }
};

class Faculty : public Person
{ // data members of Faculty
public:
    Faculty(int x) : Person(x) { cout << "Faculty::Faculty(int)" << endl; }
};

class Student : public Person
{ // data members of Student
public:
    Student(int x) : Person(x) { cout << "Student::Student(int)" << endl; }
};

class TA : public Faculty, public Student
{
public:
    TA(int x) : Student(x), Faculty(x) { cout << "TA::TA(int)" << endl; }
};

int main()
{
    TA ta(30);
}


/*
Diamond problem - 
    As we can see above the diamond the Person class getting initialized for two times...

Rsolves - 
    To resolves the diamond problem we can use two methods -
        1. Using virtual base class 
        2. using virtual inheritance by parameterized constructors... 
*/