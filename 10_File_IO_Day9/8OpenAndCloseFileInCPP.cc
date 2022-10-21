#include <iostream>
#include <fstream>
using namespace std;

int main()
{    
    ofstream myfile;
    myfile.open("8Example.txt");
    myfile<<"Writing this into file..."<<endl;


    myfile.close();
    return 0;
}