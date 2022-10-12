#include <stdio.h>

typedef union _packet
{
    int iData;
    double dData;
    char cData;
}pack;

int main()
{
    printf("%d\n", sizeof(pack));
    pack p;

    p.iData = 10;  // or
    printf("%d\n", p.iData);

    p.dData = 2.2;
    printf("%lf\n", p.dData);

    p.cData = 'a';
    printf("%c\n", p.cData);

    return 0;
}