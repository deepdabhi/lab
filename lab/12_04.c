#include <stdio.h>
int fibonacci(int n);
int main()
{

    int num;

    printf("Enter n: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}