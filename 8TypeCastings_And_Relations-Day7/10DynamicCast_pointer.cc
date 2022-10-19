#include <iostream>
using namespace std;
class A
{
public:
    virtual ~A() {}
};

class B : public A
{ };

class C
{
public:
    virtual ~C() {}
};

int main()
{
    A a;
    B b;
    C c;

    B *pB = &b;
    A *pA = dynamic_cast<A *>(pB);
    cout << pB << " casts to " << pA << ": Up-cast: Valid" << endl;
    
    pA = &b;
    pB = dynamic_cast<B *>(pA);
    cout << pA << " casts to " << pB << ": Down-cast: Valid" << endl;
    
    pA = &a;
    pB = dynamic_cast<B *>(pA);
    cout << pA << " casts to " << pB << ": Down-cast: Invalid" << endl;
    
    pA = (A *)&c;
    C *pC = dynamic_cast<C *>(pA);
    cout << pA << " casts to " << pC << ": Unrelated-cast: Invalid" << endl;
    
    pA = 0;
    pC = dynamic_cast<C *>(pA);
    cout << pA << " casts to " << pC << ": Unrelated-cast: Valid for null" << endl;
    
    pA = &a;
    void *pV = dynamic_cast<void *>(pA);
    cout << pA << " casts to " << pV << ": Cast-to-void: Valid" << endl;
    // pA = dynamic_cast<A*>(pV); // error: ’void *’: invalid expression type for dynamic_cast
}

// dynamic cast can only be used with pointers and references to classes (or with void*)