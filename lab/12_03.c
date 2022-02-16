#include <stdio.h>
int factorial (int n);
int main()
{
    int n;
    printf ("Enter n: \n");
    scanf ("%d", &n);
    printf ("%d! = %d\n", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    int f;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else{
        f = n * factorial(n - 1); 
    }
    return f;
}