#include <stdio.h>

// 1 - N formula - n * (n + 1) / 2

int main()
{
    int sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}