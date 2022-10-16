#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

typedef struct _String{ char *str; } String;
String operator+ (const String& s1, const String& s2){
    String s;
    s.str = (char *) malloc(strlen(s1.str) + strlen(s2.str) + 1);
    strcpy(s.str, s1.str);
    strcat(s.str, s2.str);
    return s;
} 

int main()
{    
    String fName, lName, name;
    fName.str = strdup("Aditya ");
    lName.str = strdup("Gaikwad ");
    name = fName + lName;
    cout<<"First name: "<<fName.str<<endl;
    cout<<"Last name: "<<lName.str<<endl;
    cout<<"Full name: "<<name.str<<endl;
    return 0;
}

/*
operator+ is overloaded to perform concat of first name
and last to form full name. The data type is String
*/