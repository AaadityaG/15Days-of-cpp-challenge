#include <iostream>
using namespace std;

/*
    Type casting - Converting an expression from one type to another.

    Types can be implisit and explicit...

    Implicit Type casting -  
        -> Done automatically! 
        -> No data loss for promotion
        -> may get warning for demotion
        -> No throwing of exception
    Explicit Type casting - 
        -> Done progamatically! 
        -> may or may not data loss for promotion/demotion(compiler will be silent)
        -> May throwing of exception for wrong type casting
        -> Hence it needs - const_cast, static_cast, dynamic_cast, reinterpret_cast
*/

int main()
{       
    int i = 3;
    double d = 2.5;
    double result = d/i;   // i is cast to double and used

    // d = i;              // implicit - promotion of i
    i = d;           // implicit - demotion of d

    cout<<"After implicit typecasting d = "<<d<<" i = "<<i<<endl;

    // d = (double)i;   // explicit - promotion of i
    // i = (int)d;         // explicit - demotion of d

    // cout<<"After explicit typecasting d = "<<d<<" i = "<<i<<endl;

    return 0;
}

/*
Safe promotions - 
    bool → char → short int → int → unsigned int → long → unsigned →
    long long → float → double → long double
*/