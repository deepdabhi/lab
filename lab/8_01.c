#include <stdio.h>
int main()
{
    int a, b;
    int i[3] = {5, 14, 23};
    int j[3];
    printf("Array before reversing: \n");
    for (a = 0; a < 3; a++)
    {
        printf("arr[%d] = %d\n", a, i[a]);
    }
    a = 0;
    printf("\n");
    for (b = 2; b >= 0; b--, a++)
    {
        j[b] = i[a];
    }
    printf("Array after reversing: \n");
    for (b = 0; b < 3; b++)
    {
        printf("arr[%d] = %d\n", b, j[b]);
    }
    return 0;
}