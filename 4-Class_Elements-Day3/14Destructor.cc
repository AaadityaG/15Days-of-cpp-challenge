#include <iostream>
using namespace std;

// Destructor{use} -  a destructor is the last function that is going to be called before an object is destroyed
// as name suggests destructor destructs the  objects...


// Objects Lifetime - object lifetime (or life cycle) of an object is the time between an object’s
// creation and its destruction

class Test
{
public:
    int count = 0;
    Test()
    {
        ++count;
        cout << "\n Constructor executed: "<<count;
    }
    // IMP - There should be only one destructor...
    ~Test()
    {
        --count;
        cout << "\n Destructor executed: "<<count;
    }
};
main()
{
    Test t, t1, t2, t3, t4;

    return 0;
}