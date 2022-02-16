#include <stdio.h>
#include <string.h>
int main()
{
    char new[50], ch;
    int i, occurance = 0;
    printf("\n");
    printf("Enter a string: ");
    gets(new);
    printf("\n");
    printf("Enter the character that you want to find: ");
    scanf("%c", &ch);
    for (i = 0; i < strlen(new); i++)
    {
        if (new[i] == ch)
        {
            occurance++;
        }
    }
    printf("\n");
    printf("%c has occured %d times in %s.\n", ch, occurance, new);
    return 0;
}