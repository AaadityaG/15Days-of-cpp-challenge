#include <stdio.h>
int main()
{
    int i = 17;
    long l = 0x012a78cb;                             // 19560651
    long long unsigned int i64 = 0x012a78cb2597ac3d; // 84012356964166717
    float f = 15.0 / 7;
    double d = 15.0 / 7;
    char c ='x';
    const char *s = "ppd";
    int *p = &i;
    printf("%d\n", i);     // dec // 17
    printf("%x\n", i);     // hex // 11
    printf("%o\n", i);     // oct // 21
    printf("%ld\n", l);    // long // 19560651
    printf("%llu\n", i64); // int 64 // 84012356964166717
    printf("%f\n", f);     // float // 2.142857
    printf("%lf\n", d);    // double // 2.142857
    printf("%c\n", c);     // char // x
    printf("%s\n", s);     // string // ppd
    printf("%p\n", p);     // pointer // 0x7ffc28102988
}
