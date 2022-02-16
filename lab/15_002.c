#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("a.txt", "r");
    fseek(fp, 0, SEEK_END);
    printf("%ld",ftell(fp));
    fclose(fp);
    return 0;
}