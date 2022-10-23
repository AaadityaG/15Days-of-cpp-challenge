#include <iostream>
#include <vector>
using namespace std;
// Brace-initialized variables may use =
struct Point1{
    int x, y;
};

class Point2{ 
    int x, y;
public:
    Point2(int a, int b){
        x = a;
        y = b;
    }
};

class Widget {
public:
    explicit Widget(int);
};

int main()
{    
    const int val1 = {5};

    const int val2 = {5};

    int a[] = { 1, 2, val1, val1+val2 };
    cout<<a[3]<<endl;

    const Point1 p1 = {10, 20};

    const Point2 p2 = {10, 20};

    const vector<int> cv = { a[0], 20, val2 };

    // Widget w1(10); // okay, direct init: explicit ctor callable
    // Widget w2{10}; // okay, direct init: explicit ctor callable
    // Widget w3 = 10; // error! copy init: explicit ctor not callable
    // Widget w4 = {10}; // error! copy init: explicit ctor not callable
    return 0;
}