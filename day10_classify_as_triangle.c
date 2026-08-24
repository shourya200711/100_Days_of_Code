#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }

    return 0;
}