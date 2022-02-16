#include <stdio.h>
int main()
{
    int marks[4], *ptr, i, sum = 0;
    ptr = marks;
    for (i = 0; i < 4; i++)
    {
        printf("Enter n: \n");
        scanf("%d", ptr);
        ptr++;
    }
    ptr = marks;
    for (i = 0; i < 4; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("%d", sum);
    return 0;
}