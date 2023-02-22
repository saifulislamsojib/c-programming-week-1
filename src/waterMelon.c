#include <stdio.h>

int main()
{
    int width;
    printf("Enter the width of watermelon: ");
    scanf("%d", &width);
    if (width % 2 == 0 && width != 2)
    {
        printf("Possible");
    }
    else
    {
        printf("Impossible");
    }

    return 0;
}