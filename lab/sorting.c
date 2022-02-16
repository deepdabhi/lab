#include <stdio.h>
int main()
{
    int val[6], i, j, temp;
    printf("Enter values in array: \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &val[i]);
    }
    printf("Values before sorting: \n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", val[i]);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {
            if (val[j] < val[j - 1])
            {
                temp = val[j];
                val[j] = val[j - 1];
                val[j - 1] = temp;
            }
        }
    }
    printf("\nValues after sorting: \n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", val[i]);
    }
    return 0;
}