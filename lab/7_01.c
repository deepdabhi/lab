#include <stdio.h>
int main()
{
    float n, sum = 0, f = 1;
    printf("Enter n: \n");
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            f *= j;
        }
        sum += 1 / f;
    }
    printf("%f", sum);
    return 0;
}