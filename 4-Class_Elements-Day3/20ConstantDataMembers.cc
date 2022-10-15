#include <iostream>
using namespace std;
class MyClass
{
    const int cPriMem_;     /* const data member */
    int priMem_;

public:
    const int cPubMem_;     /* const data member */
    int pubMem_;
    MyClass(int cPri, int ncPri, int cPub, int ncPub) : cPriMem_(cPri), priMem_(ncPri), cPubMem_(cPub), pubMem_(ncPub) {}
    int getcPri() { return cPriMem_; }
    // void setcPri(int i) { cPriMem_ = i; } // Error 1: Assignment to const data member
    int getPri() { return priMem_; }
    void setPri(int i) { priMem_ = i; }
};
int main()
{
    MyClass myObj(1, 2, 3, 4);
    cout << myObj.getcPri() << endl;
    // myObj.setcPri(6);
    // cout << myObj.getPri() << endl;
    myObj.setPri(6);
    cout << myObj.cPubMem_ << endl;
    // myObj.cPubMem_ = 3; // Error 2: Assignment to const data member
    cout << myObj.pubMem_ << endl;
    myObj.pubMem_ = 3;
}
