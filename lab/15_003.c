#include <stdio.h>
void compare(FILE *fptr1, FILE *fptr2);
int main()
{
    FILE *fptr1, *fptr2;
    fptr1 = fopen("a.txt", "r");
    fptr2 = fopen("b.txt", "r");

    compare(fptr1, fptr2);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

void compare(FILE *fptr1, FILE *fptr2)
{
    char ch1 = getc(fptr1);
    char ch2 = getc(fptr2);
    int pos = 0, line = 1, error = 0;
    while (ch1 != EOF && ch2 != EOF)
    {
        pos++;
        if (ch1 == '\n' && ch2 == '\n')
        {
            line++;
            pos = 0;
        }
        if (ch1 != ch2)
        {
            error++;
            printf("Line number : %d\tError"
                   "Position : %d\n",
                   line, pos);
        }

        ch1 = getc(fptr1);
        ch2 = getc(fptr2);
    }
    printf("%d", error);
}