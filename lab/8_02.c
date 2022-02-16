#include <stdio.h>
int main()
{
    int i, j, k, length;
    printf("Enter the length of an array: \n");
    scanf("%d", &length);
    int arr[length];
    int array[length];
    int sum[length];
    printf("Enter %d element in first array\n", length);
    for (i = 0; i < length; i++)
    {
        printf("Enter n : ");
        scanf("%d", &arr[i]);
    }
    printf("First array :\n");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\n");
    printf("Enter %d element in second array\n", length);
    for (j = 0; j < length; j++)
    {
        printf("Enter n : ");
        scanf("%d", &array[j]);
    }
    printf("second array :\n");
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
    for (i = 0; i < length; i++)
    {
        sum[i] = arr[i] + array[i];
    }
    printf("Sum of the respective elements of both the array : \n");
    for (i = 0; i < length; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}