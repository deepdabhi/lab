#include <stdio.h>
int main()
{
    int arr[5] = {5, 14, 23, 32, 41};
    int array[5];
    int choice, replace, element, i, j;
    printf("Original array : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        array[i] = arr[i];
    }
    printf("Enter 0 to delete an element and 1 for replace an element : \n");
    scanf("%d", &choice);
    if (choice == 0)
    {
        printf("Enter the element that you want to delete : \n");
        scanf("%d", &element);
        for (i = 0; i < 5; i++)
        {
            if (arr[i] == element)
            {
                for (j = i; j < 4; j++)
                {
                    arr[j] = array[j + 1];
                }
            }
        }
        printf("Array after deleting an element : \n");
        for (i = 0; i < 4; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    if (choice == 1)
    {
        printf("Enter the element that you want to replace : \n");
        scanf("%d", &element);
        printf("Enter the element that you want to put in the place of replaced element : \n");
        scanf("%d", &replace);
        for (i = 0; i < 5; i++)
        {
            if (arr[i] == element)
            {
                arr[i] = replace;
            }
        }
        printf("Array after replacing an element : \n");
        for (i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}