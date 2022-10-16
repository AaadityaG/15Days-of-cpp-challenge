#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "\nEnter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is: " << id << " and this is employee number :" << count;
    }

    // will only use and showcase the static data members...
    static void getCount(void)
    {
        cout<<"\nThe value of count is : "<<count<<endl;  // allowed
        // cout<<id;    // not allowed
    }
};
int Employee::count; 

int main()
{
    Employee e, e1, e2;

    e.setData();
    e.getData();
    Employee::getCount();   // using static function

    e1.setData();
    e1.getData();
    Employee::getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();
    return 0;
}



/*
Static local variable = class variables ->
Visibility: class
Lifetime: till termination of program
Default value:0
Storage:heap

Local Variable ->
Visibility: class
Lifetime: until execution of class
Default value:garbage
Storage:stack

Global variable ->
Visibility: file
Lifetime: till termination of program
Default value:0
Storage:heap
*/