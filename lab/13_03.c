#include <stdio.h>
typedef struct cricket
{
    char name[50];
    char team[50];
    float run; 
} make;
int main()
{
    make cric[2];
    int i, ave = 0, t = -1;
    for (i = 0; i < 2; i++)
    {
        printf ("Enter details for player%d, \n", i + 1);
        printf ("Enter name : "); 
        scanf ("%s", cric[i].name);
        printf ("Enter country: ");
        scanf ("%s", cric[i].team);
        printf ("Enter batting average: ");
        scanf ("%f", &cric[i].run);
    }
    printf("Name\t\t");
    printf("Country\t\t");
    printf("Batting average\t\t");
    for (i = 0; i < 2; i ++)
    {
        if (cric[i].run > ave)
        {
            ave = cric[i].run;
            t = i; 
        }
        printf ("\n%s\t\t", cric[i].name);
        printf ("%s\t\t", cric[i].team);
        printf ("%.2f\n", cric[i].run);
    }
    printf ("%s is from %s with highest run rate.", cric[t].name, cric[t].team);
    return 0;
}