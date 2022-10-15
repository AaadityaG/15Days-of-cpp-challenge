#include <stdio.h>
typedef struct
{ // struct Point
    int x;
    int y;
} Point;
typedef struct
{             
    Point TL; 
    Point BR; 
} Rect;
int main()
{
    Rect r = {{0, 2}, {5, 7}};
    // r.TL <-- { 0, 2 }; r.BR <-- { 5, 7 }
    // r.TL.x <-- 0; r.TL.y <-- 2
    // Members of Structure r accessed
    printf("[(%d %d) (%d %d)]",
           r.TL.x, r.TL.y, r.BR.x, r.BR.y);
}
