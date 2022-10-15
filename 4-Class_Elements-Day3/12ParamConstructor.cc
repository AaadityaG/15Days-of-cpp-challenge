#include <iostream>
using namespace std;

class info{
    int id, jid;
public:
    info(int empid = 9, int jobid = 0)   // parameterized constructor
    {
        id = empid;
        jid = jobid;
        cout<<"initialized in parameterized constructor..."<<endl;
    }
    info()    // overloaded constructor
    {
        cout<<"Initialized in un parameterized constructor..."<<endl;
    }
};

int main()
{    
    // info i;
    info j(4);  
    return 0;
}