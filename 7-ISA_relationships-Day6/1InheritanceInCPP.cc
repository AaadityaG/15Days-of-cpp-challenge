#include <iostream>
using namespace std;

// Single inheritance.
class Employee{ };
class Manager : public Employee{ };

// Hybrid inheritance.
class Vehical{ };
class ThreeWheeler : public Vehical{ };
class TwoWheeler : public Vehical{ };

// Multi-level inheritance.
class Flower{ };
class Rose : public Flower{ };
class RedRose : public Rose{ };

int main()
{    

    return 0;
}


/*
Above in single inheritnace - 
    Manager class is the specialization of Employee.
    Employee class is the generalization of Manager.
in hybrid inheritance -
    Vehical is the generalization of ThreeWheeler and TwoWheeler
    ThreeWheeler and TwoWheeler is the specialization of Vehicle
in Multi-level inheritance - 
    Flower is generalization of Rose and RedRose 
    Rose is generalization of RedRose...
    RedRose is specialization of Rose...

*/