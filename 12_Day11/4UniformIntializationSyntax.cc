#include <iostream>
using namespace std;

// struct Point1{ int x, y; };
// class Point2{ int x, y; };

struct Point1 { int x, y; };
class Point2 { public: Point2(int x, int y); };

int main()
{    
    const int y(5); // direct initialization syntax

    const int x = 5; // copy initialization syntax

    int arr[] = { 5, 10, 15 }; // brace initialization

    const Point1 p1 = { 10, 20 }; // brace initialization

    const Point2 p2(10, 20); // function call syntax

    
    return 0;
}