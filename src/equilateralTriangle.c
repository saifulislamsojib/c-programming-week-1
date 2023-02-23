#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Enter three sides of a triangle: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a == b && b == c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}