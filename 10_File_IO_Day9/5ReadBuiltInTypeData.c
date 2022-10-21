#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    long l;
    long long unsigned int i64; // For a 64-bit machine
    float f;
    double d;
    char c;
    char *s = (char *)malloc(10); // Space needs to be allocated to store the string to be read
    int *p;
    // Input shown in magenta and Output shown in gray
    scanf("%d\n", &i);
    printf("%d\n", i); // dec // 17 17
    scanf("%x\n", &i);
    printf("%x\n", i); // hex // 11 11
    scanf("%o\n", &i);
    printf("%o\n", i); // oct // 21 21
    scanf("%ld\n", &l);
    printf("%ld\n", l); // long // 19560651 19560651
    scanf("%llu\n", &i64);
    printf("%llu\n", i64); // int 64 // 84012356964166717 84012356964166717
    scanf("%f\n", &f);
    printf("%f\n", f); // float // 2.142857 2.142857
    scanf("%lf\n", &d);
    printf("%lf\n", d); // double // 2.142857 2.142857
    scanf("%c\n", &c);
    printf("%c\n", c); // char // x x
    // Used just ’s’, not &s, as it is a pointer
    scanf("%s\n", s);
    printf("%s\n", s); // string // ppd ppd
    scanf("%p\n", &p);
    printf("%p\n", p); // pointer // 008FFC0C 008FFC0C
    return 0;
}
