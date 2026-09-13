#include <stdio.h>

int main()
{
    int a[5];
    int i;

    // Read elements
    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Print elements
    printf("Array elements are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}