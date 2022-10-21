#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{    
    ifstream myfile("8Example.txt");
    string line;
    if(myfile.is_open()){
        while (getline(myfile, line))
        {
            cout<<line<<endl;
        }
        myfile.close();
    }
    else cout<<"Unable to open file."<<endl;
    return 0;
}