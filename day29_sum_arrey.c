#include <stdio.h>

int main()
{
    int a[5];
    int i, sum = 0;

    // Input array elements
    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Calculate sum
    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    // Print sum
    printf("Sum = %d", sum);

    return 0;
}