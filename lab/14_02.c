#include <stdio.h>
int strlen(char *p);
int main()
{
    char str[100];
    printf("Enter any string: \n");
    gets(str);
    int length = strlen(str);
    printf("%d", length);
    return 0;
}
int strlen(char *p)
{
    int size = 0;
    while(p != '\0')
    {
        size++;
        p++;
    }
    return size;
}