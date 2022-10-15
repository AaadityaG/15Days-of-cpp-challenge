#include <iostream>
using namespace std;

// IMP(For constant objects) - A constant objects cannot invoke normal methods of the class lest these methods
// change the object

// constant objects can only invokes constant member functions and constant member data fields

class myclass{
    int myPriMember_;
public: 
    int myPubMember_; 
    myclass(int mPri, int mPub): myPriMember_(mPri), myPubMember_(mPub){
        // nothing
    }
    int getMember(){
        return myPriMember_;
    }
    void setMember(int i){
        myPriMember_ = i;
    }
    void Print(){
        cout<<myPriMember_<<", "<<myPubMember_<<endl;
    }
};

int main(void)
{    
    myclass mobj(0, 1);   // NonConstant object - which can access the methods, do the changes(by methods OR directly) 
    // myclass const mobj(4, 5);   // any  normal changes are not possible with it...

    // below all give an error if constant object is being used...
    cout<<mobj.getMember()<<endl;
    mobj.setMember(2);
    mobj.myPubMember_ = 3;
    mobj.Print();
    return 0;
}