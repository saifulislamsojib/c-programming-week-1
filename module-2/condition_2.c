#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Ami burger khabo.");
    }
    else if (tk >= 50)
    {
        printf("Ami Fuchka khabo.");
    }
    else if (tk >= 20)
    {
        printf("Ami ice crime khabo.");
    }
    else
    {
        printf("Ami saradin kisu khabo na.");
    }
    return 0;
}