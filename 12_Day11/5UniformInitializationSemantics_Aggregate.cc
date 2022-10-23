#include <iostream>
using namespace std;
// Aggregates: Initialize members/elements beginning-to-end
struct Point1 { int x = 0, y = 0; };
int main()
{    
    const Point1 p1 = { 10 }; // same as { 10, 0 }
    cout<<p1.x<<endl;
    cout<<p1.y<<endl;

    return 0;
}