#include <stdio.h>
void sum(int a[], int b[]);
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 3, 4};
    sum(a, b);
    return 0;
}
void sum(int a[], int b[])
{
    int c[4], i;
    for (i = 0; i < 4; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < 4; i++)
    {
        printf ("%d ",c[i]); 
    }
}
