#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter your main marks and bonus marks: ");
    scanf("%d %d", &x, &y);
    if (x + y >= 100)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}