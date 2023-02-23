#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Enter two percentage numbers: ");
    int x, y;
    scanf("%d%% %d%%", &x, &y);
    int mul = x * y;
    printf("%d%%", mul);
    return 0;
}