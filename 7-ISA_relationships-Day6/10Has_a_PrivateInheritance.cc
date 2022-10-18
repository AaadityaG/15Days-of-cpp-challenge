#include <iostream>
using namespace std;

class Engine
{
public:
    Engine(int numCylinders) {}
    void start() {} // Starts this Engine
};

class Car : private Engine
{ // Car has-a Engine
public:
    // Initializes this Car with 8 cylinders
    Car() : Engine(8) { cout<<"Car::ctor"; }
    // Start this Car by starting its Engine
    using Engine::start;
};

int main()
{
    Car c;
    c.start();
}
