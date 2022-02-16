#include <stdio.h>
int main()
{
    int x = 4, y = 5, *a, *b, temp;
    a = &x;
    b = &y;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d", x,y);
    return 0;
}