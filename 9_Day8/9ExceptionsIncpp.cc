#include <iostream>
#include <exception>  // must
using namespace std;

class EXcp : public exception{ };  // inherited the class
void g(){
    bool error = false;
    cout<<"g() started\n";
    if(error)
        throw EXcp();
    cout<<"g() ended\n";
}

int main()
{    
    try {
        cout << "g() called\n";
        g();
        cout << "g() returned\n";
    }
    catch(EXcp&){ 
        cout << "g() failed\n";
    }

    return 0;
}