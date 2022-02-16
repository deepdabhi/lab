#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("1st arry : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    int array[5] = {4, 2, 3, 4, 5};
    printf("2nd arry : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    int mul[5];
    for (int i = 0; i < 5; i++)
    {
        mul[i] = arr[i] * array[i];
    }
    printf("Array after multiplication : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", mul[i]);
    }
    return 0;
}