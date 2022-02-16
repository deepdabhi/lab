#include <stdio.h>
void sum(int a[]);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    sum(arr);
    return 0;
}
void sum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
}