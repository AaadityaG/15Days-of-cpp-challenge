#include <iostream>
#include <string>
using namespace std;

// the program is compiling fine because static objects of 'Data' class 
// have been initialized in 'Myclass'

class Data
{
    string id_;

public:
    Data(const string &id) : id_(id)
    {
        cout << "Construct: " << id_ << endl;
    }
    ~Data()
    {
        cout << "Destruct: " << id_ << endl;
    }
};
// order is doesn't matter at all...
class MyClass
{
    // static Data d1_; // Listed 1st
    // static Data d2_; // Listed 2nd
    static Data d2_; // Listed 1st
    static Data d1_; // Listed 2nd
};

Data MyClass::d1_("obj1");
Data MyClass::d2_("obj2");

int main()
{

    return 0;
}