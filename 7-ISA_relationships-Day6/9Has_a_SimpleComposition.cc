#include <iostream>
using namespace std;
class Engine
{
public:
    Engine(int numCylinders) {}
    void start() {} // Starts this Engine
};

class Car
{
public:
    // Initializes this Car with 8 cylinders
    Car() : e_(8) {}
    // Start this Car by starting its Engine
    void start() { 
        e_.start();
        cout<<"Starting Car::start()"<<endl;
    }

private:
    Engine e_; // Car has-a Engine
};

int main()
{
    Car c;
    c.start();
}