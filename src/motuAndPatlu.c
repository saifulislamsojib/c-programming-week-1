#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d", sum);
    return 0;
}