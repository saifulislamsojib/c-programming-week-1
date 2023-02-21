#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    printf("%d %d %d", sum, sub, mul);
    return 0;
}