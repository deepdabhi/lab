#include <stdio.h>
int main()
{
    int n;
    long int factorial(int);
    printf("Enter the number of which to find factorial: ");
    scanf("%d", &n);
    printf("%d! = %ld",n, factorial(n));
    return 0;
}
long int factorial(int n)
{
    int fact;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        fact = n * factorial(n - 1);
    }
    return (fact);
}