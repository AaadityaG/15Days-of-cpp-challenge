/*
There are types of datatypes 
1. Built in - char, int, float, double, bool<bool.h>, char 
2. Derived - enum, array, struct & union, pointer, function, string(<string.h>)  

modifiers in c - These are keywords in C to modify the default properties of int and char data types
short, unsingned, singned, long
*/

// sample intializations of data -

#include <stdio.h>

int main(){
    int i = 10,  j = 20;
    char c = 'x';
    float weight = 54.6;
    double desity = 0.444;
    const int elements = 100;  // const should be always initialized..
    char * name[] = {"Aditya", "Arun", "Gaikwad"};

    printf("int has %d, %d\n", i, j);
    printf("char has %c\n", c);
    printf("float has %f\n", weight);
    printf("double has %f\n", desity);
    printf("const int has %d\n", elements);
    printf("char array has - :");
    for(int i = 0; i<3; i++)
    {
        printf("%s ", name[i]);
    }
    return 0;
}