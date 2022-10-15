#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class String
{
private:
    char *str_;
    size_t len_;

public:
    String(const char *s) : str_(strdup(s)), len_(strlen(str_)) // Ctor
    {
        cout << "String ctor: ";
        print();
        cout << endl;
    }
    // copy Constructor - 
    String(const String &s) : str_(strdup(s.str_)), len_(strlen(str_)) // CCtor
    {
        cout << "String cctor: ";
        print();
        cout << endl;
    }
    String &operator=(const String &s)
    {
        if (this != &s)
        {
            free(str_);
            str_ = strdup(s.str_);
            len_ = s.len_;
        }
        return *this;
    }
    ~String()
    {
        cout << "String dtor: ";
        print();
        cout << endl;
        free(str_);
    } // Dtor
    void print() const { cout << str_; }
};
