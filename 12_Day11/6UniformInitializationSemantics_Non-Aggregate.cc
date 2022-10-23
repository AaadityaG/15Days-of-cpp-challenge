#include <iostream>
using namespace std;
// Non-Aggregates: Invoke a constructor
class Point1{
    int x, y;
public:
    Point1(int a, int b){
        x = a;
        y = b;
        cout<<endl<<"The constructor is invoked!"<<endl;
    }
};

int main()
{    
    Point1 x(4, 5);
    return 0;
}