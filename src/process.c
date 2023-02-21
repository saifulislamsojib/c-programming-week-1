#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("give me first number: ");
    scanf("%d", &num1);
    printf("give me second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("the sum of two numbers is %d \n", sum);
    return 0;
}