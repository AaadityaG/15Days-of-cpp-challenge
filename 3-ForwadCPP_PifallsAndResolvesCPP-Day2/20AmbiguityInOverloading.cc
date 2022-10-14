#include <iostream>
using namespace std;

int fun(float a) {/*code*/} // Function 1
int fun(float a, int b) {/*code*/} // Function 2
int fun(float x, int y = 5) {/*code*/} // Function 3
int main(){
    float p = 4.5, t = 10.5;
    int s = 30;
    fun(p, s); // CALL - 1
    // fun(t); // CALL - 2  ambiguity will happen here
    return 0;
}