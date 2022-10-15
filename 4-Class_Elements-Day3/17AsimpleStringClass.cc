#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class String
{
    char *str_;  // Container
    size_t len_; // Length
public:
    String(char *s) : str_(strdup(s)), // Uses malloc()
                      len_(strlen(str_))
    {
        cout << "ctor: ";
        print();
    }
    ~String()
    {
        cout << "dtor: ";
        print();
        free(str_); // To match malloc() in strdup()
    }
    void print() { cout << "(" << str_ << ": "
                        << len_ << ")" << endl; }
    // size_t len() { return len_; }
};
int main()
{
    String s = "Partha"; // Ctor called
    s.print();
}
