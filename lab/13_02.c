#include <stdio.h>
typedef struct student
{
    char Name[50];
    int roll;
    float marksP;
    float marksC;
    float marksM;
} make;

int main()
{
    int i, max = -1, t = -2;
    float average = 0;
    make student[5];
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; i++)
    {
        student[i].roll = i + 1;
        printf("\nFor student%d, \n", student[i].roll);
        printf("Enter roll no: ");
        scanf("%d", &student[i].roll);
        printf("Enter first name: ");
        scanf("%s", student[i].Name);
        printf("Enter marks of physics: ");
        scanf("%f", &student[i].marksP);
        printf("Enter marks of chemistry: ");
        scanf("%f", &student[i].marksC);
        printf("Enter marks of maths: ");
        scanf("%f", &student[i].marksM);
    }
    printf("Displaying Information:\n\n");

    printf("Sr. no.\t\t");
    printf("Roll no.\t\t");
    printf("Name\t\t");
    printf("Physics\t\t");
    printf("Chemistry\t\t");
    printf("Maths\t\t");
    printf("Percentage\t\t");

    for (i = 0; i < 5; i++)
    {
        printf("\n%d\t\t", i + 1);
        printf("%d\t\t", student[i].roll);
        printf("%s\t\t", student[i].Name);
        printf("%.1f\t\t", student[i].marksP);
        printf("%.1f\t\t", student[i].marksC);
        printf("%.1f\t\t", student[i].marksM);
        if (average > max)
        {
            max = average;
            t = i;
        }
        average = (student[i].marksM + student[i].marksP + student[i].marksC) / 3;
        printf("%.1f\t\t", average);
        printf("\n");
    }
    printf("%s is the student with highest grades in the class.", student[t].Name);
    return 0;
}
