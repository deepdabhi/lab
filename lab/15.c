#include <stdio.h>
int main()
{
    FILE *fp;
    char str[50];
    fp = fopen("a.txt", "r");
    fscanf(fp, "%s", str);
    printf("%s", str);
    return 0;
}