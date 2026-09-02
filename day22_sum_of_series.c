#include <stdio.h>

int main()
{
    int n;
    float sum = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;

        sum = sum + (float)numerator / denominator;
    }

    printf("Sum = %.2f", sum);

    return 0;
}