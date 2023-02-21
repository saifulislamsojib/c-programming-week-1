#include <stdio.h>

int main()
{
    int radius;
    const float PI = 3.14159;
    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);
    float area = PI * radius * radius;
    printf("The area of the circle is: %.2f", area);
    return 0;
}