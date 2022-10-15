#include <iostream>
using namespace std;
#include "Date.h"
#include "Name.h"
#include "Address.h"
class CreditCard
{
    typedef unsigned int UINT;
    char *cardNumber_;
    Name holder_;
    Address addr_;
    Date issueDate_, expiryDate_;
    UINT cvv_;

public:
    CreditCard(const char *cNumber, const char *fn, const char *ln, unsigned int hn, const char *sn,
               const char *cn, const char *pin, UINT issueMonth, UINT issueYear, UINT expiryMonth, UINT expiryYear,
               UINT cvv) : holder_(fn, ln), addr_(hn, sn, cn, pin), issueDate_(1, issueMonth, issueYear),
                           expiryDate_(1, expiryMonth, expiryYear), cvv_(cvv) // Uses Ctor’s of Date, Name, Address
    {
        cardNumber_ = new char[strlen(cNumber) + 1];
        strcpy(cardNumber_, cNumber);
        cout << "CC ctor: ";
        print();
        cout << endl;
    }
    // Uses Dtor’s of Date, Name, Address
    ~CreditCard()
    {
        cout << "CC dtor: ";
        print();
        cout << endl;
        delete[] cardNumber_;
    }
    void setHolder(const Name &h) { holder_ = h; }         // Change holder name
    void setAddress(const Address &a) { addr_ = a; }       // Change address
    void setIssueDate(const Date &d) { issueDate_ = d; }   // Change issue date
    void setExpiryDate(const Date &d) { expiryDate_ = d; } // Change expiry date
    void setCVV(UINT v) { cvv_ = v; }                      // Change cvv number
    void print() const
    {
        cout << cardNumber_ << " ";
        holder_.print();
        cout << " ";
        addr_.print();
        cout << " ";
        issueDate_.print();
        cout << " ";
        expiryDate_.print();
        cout << " ";
        cout << cvv_;
    }
};