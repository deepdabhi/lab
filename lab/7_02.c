#include <stdio.h>
int main()
{
    int n, f = 0;
    printf("Enter n: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = f + i * i;
    }
    printf("%d", f);
    return 0;
}