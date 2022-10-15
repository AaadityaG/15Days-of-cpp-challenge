#include <iostream>
using namespace std;

class myclass{
    int myPriMember_;
public: 
    int myPubMember_; 
    myclass(int mPri, int mPub): myPriMember_(mPri), myPubMember_(mPub){
        // nothing
    }
    int getMember() const{     // constant member function
        return myPriMember_;
    }
    void setMember(int i){
        myPriMember_ = i;
    }
    void Print() const{        // constant member function
        cout<<myPriMember_<<", "<<myPubMember_<<endl;
    }
};

int main(void)
{    
    myclass mobj1(0, 1);   // NonConstant object - which can access the methods, do the changes(by methods OR directly) 
    myclass const mobj2(4, 5);   // any  normal changes are not possible with it...

    // Non-constant object can invoke constant functions by constant objects cannot invokes non-constant functions...

    cout<<mobj2.getMember()<<endl;
    mobj1.setMember(2);
    mobj1.myPubMember_ = 3;
    mobj2.Print();
    return 0;
}