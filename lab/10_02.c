#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i;
    printf("\n");
    printf("Please enter any string for toggling: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("\n");
    printf ("The given string after toggling is: %s", str);
    return 0;
}