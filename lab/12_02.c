#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void main()
{
    int a = 10, b = 5;
    printf("Before swap: \n");
    printf("a = %d, b = %d\n\n", a, b);
    swap(&a, &b);
    printf("After swap: \n");
    printf("a = %d, b = %d\n\n", a, b);
}