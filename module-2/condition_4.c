#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 10000)
    {
        printf("Cox's Bazar jabo.\n");
        printf("Saint martin jabo.");
    }
    else if (tk >= 5000)
    {
        printf("Cox's Bazar jabo.\n");
        printf("Firot chole asbo.");
    }
    else
    {
        printf("Kothao jabo na.");
    }
    return 0;
}