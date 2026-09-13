#include <stdio.h>

int main()
{
    int a[5];
    int i, max, min;

    // Input array elements
    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Assume first element is both maximum and minimum
    max = a[0];
    min = a[0];

    // Find maximum and minimum
    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}