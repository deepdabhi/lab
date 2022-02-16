#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter any string: ");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("The length of %s is: %d\n", str, i);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int str[100];
//     int size = 0, i = 0;
//     printf("Enter any string: ");
//     scanf("%s", &str);
//     while (str[i] != '\0')
//     {
//         size++;
//         i++;
//     }
//     printf("The length of %s is: %d\n", str, size);
//     return 0;
// }


// C program to find length of the string without using strlen() function
// #include <stdio.h>
// int main()
// {
//     char s[100];
//     int i;

//     printf("Enter a string: ");
//     scanf("%s", s);

//     for (i = 0; s[i] != '\0'; ++i);
//     printf("Length of string: %d", i);
//     return 0;
// }
