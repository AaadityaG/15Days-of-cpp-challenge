#include <iostream>
using namespace std;
class MyClass
{
    int mem_;
    // mutable data members - are changeble even in a constant objects...
    mutable int mutableMem_;

public:
    MyClass(int m, int mm) : mem_(m), mutableMem_(mm) {}
    int getMem() const { return mem_; }
    void setMem(int i) { mem_ = i; }
    int getMutableMem() const { return mutableMem_; }
    void setMutableMem(int i) const { mutableMem_ = i; } // Okay to change mutable
};
int main()
{
    const MyClass myConstObj(1, 2);
    cout << myConstObj.getMem() << endl;
    // myConstObj.setMem(3); // Error to invoke
    cout << myConstObj.getMutableMem() << endl;
    myConstObj.setMutableMem(4);  // here mutable mutableMem_ is changing by the function...
}
