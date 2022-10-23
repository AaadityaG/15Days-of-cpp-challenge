// String literals - are string where special characters are not special:

#include <iostream>
#include <string>
using namespace std;

int main()
{    
    string noNewlines(R"(\n\n)");

    // Rawness may be added to any string encoding:
    // LR"(Raw Wide string literal \t (without a tab))"
    // u8R"(Raw UTF-8 string literal \n (without a newline))"
    // uR"(Raw UTF-16 string literal \\ (with two backslashes))"
    // UR"(Raw UTF-32 string literal ˘2620 (w/o a skull & crossbones))"    

    return 0;
}
