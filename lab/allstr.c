#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "deep", str1[] = "dabhi";
    strcpy(str, str1);
    printf("%s\n", str);
    strcmp(str, str1);
    printf("%s\n", str);
    strcat(str, str1);
    printf("%s\n", str);
    strrev(str);
    printf("%s\n", str);
    return 0;
}