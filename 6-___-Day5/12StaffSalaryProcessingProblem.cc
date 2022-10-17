#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
protected:
    string Engi_name_;
    string Man_name_;
    string Dir_name_;
    string SE_name_;
    vector<Employee *> reports_;

public:
    virtual void ProcessSalary() = 0;
    virtual ~Employee(){ }
    static vector<Employee *> staffs;
    void AddStaff(Employee *e){ 
        staffs.push_back(e);
    }
};

class Engineer : public Employee{
public:
    Engineer(const string& name){
        Engi_name_ = name;
        AddStaff(this);
    }
    void ProcessSalary(){
        cout<<Engi_name_<<": Processing Salary for Engineer"<<endl;
    }
};

class Manager : public Employee{
public:
    Manager(const string& name){
        Man_name_ = name;
        AddStaff(this);
    }
    void ProcessingSalary(){
        cout<<Man_name_<<": Processing Salary for Manager"<<endl;
    }
};

class Director : public Employee{
public:
    Director(const string& name){
        Dir_name_ = name;
        AddStaff(this);
    }
    void ProcessingSalary(){
        cout<<Dir_name_<<": Processing Salary for Director"<<endl;
    }
};

class SalesExecutive : public Employee{
public:
    SalesExecutive(const string& name){
        SE_name_ = name;
        AddStaff(this);
    }
    void ProcessSalary(){
        cout<<SE_name_<<": Processing Salary for Sales Executive"<<endl;
    }
};

vector<Employee*> Employee::staffs;

int main()
{
    Engineer e1("Aditya"), e2("Pratik"), e3("Shambhu");
    // Manager m1("Kamala"), m2("Rajib");        // does's working for both manager and director...
    SalesExecutive s1("Hari"), s2("Bhishnu");
    // Director d("Ranjan");

    vector<Employee*>::const_iterator it;

    for (it = Employee::staffs.begin(); it< Employee::staffs.end(); ++it)
        (*it) -> ProcessSalary();    
    return 0;
}