#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    int doubleOfNum = num * 2;
    printf("%d", doubleOfNum);
    return 0;
}