#include <stdio.h>
int a = 10, b = 5;
void swap(int, int);
int main()
{
    printf("Before swap :a=%d and b=%d", a, b);
    swap(a, b);
    printf("\n\nIn main::After swap :a=%d and b=%d", a, b);
    return 0;
}
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("\n\nAfter swap :a=%d and b=%d\n", a, b);
}