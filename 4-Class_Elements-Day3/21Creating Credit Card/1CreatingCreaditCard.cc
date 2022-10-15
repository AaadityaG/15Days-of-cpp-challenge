// not working...
#include <iostream>
using namespace std;
#include "CreditCard.h"
int main()
{
    CreditCard cc("5321711934640027", "Sherlock", "Holmes",
                  221, "Baker Street", "London", "NW1 6XE", 7, 2014, 6, 2016, 811);
    cout << endl;
    cc.print();
    cout << endl
         << endl;
    ;
    cc.setHolder(Name("David", "Cameron"));
    cc.setAddress(Address(10, "Downing Street", "London", "SW1A 2AA"));
    cc.setIssueDate(Date(1, 7, 2017));
    cc.setExpiryDate(Date(1, 6, 2019));
    cc.setCVV(127);
    cout << endl;
    cc.print();
    cout << endl << endl;;
}
