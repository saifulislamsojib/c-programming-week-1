#include <stdio.h>

int main()
{
    // int 4 byte - 32 bit
    // (-10^9 - 10^9) 1 er por 0 9 ta
    int a = 1000000000;
    printf("%d\n", a);

    // long long int 8 byte - 64 bit
    // (-10^18 - 10^18) 1 er por 0 18 ta
    long long int b = 1000000000000000000;
    printf("%lld\n", b);

    // float 4 byte - 32 bit
    // total 7 digit
    float f = 4.5851421;
    printf("%0.7f\n", f);

    // double 8 byte - 64 bit
    // total 16 digit
    double lf = 5.585142145644644;
    printf("%0.15lf", lf);

    return 0;
}