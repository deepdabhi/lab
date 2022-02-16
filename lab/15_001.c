#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    char ch;
    fptr1 = fopen("a.txt", "r");
    fptr2 = fopen("b.txt", "w");
    ch = getc(fptr1);

    while (ch != EOF)
    {
        putc(ch, fptr2);
        ch = getc(fptr1);
    }

    printf("File is copied successfully.\n");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}