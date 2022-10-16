
#include <iostream>
using namespace std;

/* 
static data member - [In short - it is common for all objects...]
    -> once we declare any of the data member as a static it means that it becomes the property of whole 
    class and not of only the object. 
    -> e.g. suppose you declared a static data member and created the first object of the class and by the all operations of 
    your functions of class that SDM becomes 30. So for next object of class the value of that SDM starts with 30 may be reach out 
    to 60 with same operations as last one. And thats why it is also called as class data member.
    [*Note = it doesn't need to initialize, its default initialization value is zero.]
*/
class Employee{
    int id;
    static int count;
public:
    void setData(void){
        cout<<"\nEnter the id: "<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of employee is: "<<id<<" and this is employee number :"<<count;
    }
};
// if we we want to initialize it with another value then we can...
// its default value is 0
int Employee::count;  // declare static data member

int main()
{    
    Employee e, e1, e2;
    e.setData();
    e.getData();

    e1.setData();
    e1.getData();

    e2.setData();
    e2.getData();
    return 0;
}