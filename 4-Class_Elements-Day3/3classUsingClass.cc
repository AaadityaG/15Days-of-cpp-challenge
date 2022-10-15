#include <iostream>
using namespace std;

class Point{
public:
    int x, y;
};

class Rect{
public:
    Point T;
    Point B;
};

int main()
{    
    Rect r = {{0, 2}, {5, 7}};

    cout<<"[("<<r.T.x<<" "<<r.T.y<<")("<<r.B.x<<" "<<r.B.y<<")]";

    return 0;
}