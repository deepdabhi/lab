#include <stdio.h>
int main()
{
    int x, y;
    void power(int, int);
    printf("Enter x,y:");
    scanf("%d%d", &x, &y);
    power(x, y);
    return 0;
}
void power(int x, int y)
{
    int i, prod = 1;
    for (i = 1; i <= y; i++)
    {
        prod = prod * x;
    }
    printf("%d ^ %d = %d", x, y, prod);
}