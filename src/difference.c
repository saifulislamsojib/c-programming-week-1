#include <stdio.h>
#include <math.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Enter two numbers: ");
    int x, y;
    scanf("%d %d", &x, &y);
    int def = abs(y - x);
    printf("%d", def);
    return 0;
}