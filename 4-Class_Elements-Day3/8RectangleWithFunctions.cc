#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    int x;
    int y;
};
class Rect
{
public:
    Point TL; // Top-Left
    Point BR; // Bottom-Right
    // Method
    void computeArea()
    { // Parameter implicit
        //  returns the absolute value of an integer number
        cout << abs(TL.x - BR.x) * abs(BR.y - TL.y);
    }
};
int main()
{
    Rect r = {{0, 2}, {5, 7}};
    r.computeArea(); // Method invocation
}