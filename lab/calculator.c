#include <stdio.h>
int main()
{
    void sum(int, int);
    void min(int, int);
    void mul(int, int);
    void div(int, int);
    int a = 2, b = 3;
    sum(a, b);
    min(a, b);
    mul(a, b);
    div(a, b);
    return 0;
}
void sum(int a, int b)
{
    printf("sum = %d\n", a + b);
}
void min(int a, int b)
{
    printf("subraction = %d\n", a - b);
}
void mul(int a, int b)
{
    printf("multiplication = %d\n", a * b);
}
void div(int a, int b)
{
    printf("division = %d\n", a / b);
}
