#include <stdio.h>

typedef union test
{
    int x;
    char str[20];
    float y;
} data;

int main()
{
    data p1;
    p1.x = 65;
    data *p2 = &p1;

    printf("%d bytes is the size of memory that is used by variable data\n", sizeof(data));
    // below statements demonstrates, how to enter values in union using pointers and by traditional method.
    printf("%d\n", p1.x);
    printf("%d\n", p2->x);
    return 0;
}