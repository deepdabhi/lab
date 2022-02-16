#include <stdio.h>
void compareFiles(FILE *FP1, FILE *FP2);

int main()
{
    FILE *fp1 = fopen("a.txt", "r");
    FILE *fp2 = fopen("b.txt", "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error : Files not open");
    }

    compareFiles(fp1, fp2);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
void compareFiles(FILE *fp1, FILE *fp2)
{
    char ch1 = getc(fp1);
    char ch2 = getc(fp2);

    int error = 0, pos = 0, line = 1;

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
            printf("Line Number : %d \tError"
                   " Position : %d \n",
                   line, pos);
        }

        ch1 = getc(fp1);
        ch2 = getc(fp2);
    }

    printf(" %d\t", error);
}
