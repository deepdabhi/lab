#include <stdio.h>
int main()
{
    int arr[5];
    int row, i;
    for (row = 0; row < 5; row++)
    {
        printf("Enter n : \n");
        scanf("%d", &arr[row]);
    }
    printf("\nArray before sorting : \n");
    for (row = 0; row < 5; row++)
    {
        printf("%d ", arr[row]);
    }
    printf("\n");
    printf("\n");

    for (i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting : \n");
    for (row = 0; row < 5; row++)
    {
        printf("%d ", arr[row]);
    }
    return 0;
}