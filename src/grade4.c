#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade > 100 || grade < 0)
    {
        printf("Out of range.");
    }
    else if (grade >= 80)
    {
        printf("A+");
    }
    else if (grade >= 70)
    {
        printf("A");
    }
    else if (grade >= 60)
    {
        printf("A-");
    }
    else if (grade >= 50)
    {
        printf("B");
    }
    else if (grade >= 40)
    {
        printf("C");
    }
    else if (grade >= 33)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}