#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "deep", str1[] = "deep";
    printf("%d",strcmp(str, str1));
    printf ("\n");
    strcpy (str, str1);
    printf ("%s\n", str);
    strcat(str, str1);
    printf ("%s\n", str);
    strrev(str);
    printf ("%s", str);
    return 0;
}