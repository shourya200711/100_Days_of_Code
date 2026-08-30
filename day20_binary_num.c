#include <stdio.h>

int main()
{
    int n, digit, result = 0, place = 1;

    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 0)
        {
            result = result + 1 * place;
        }
        else
        {
            result = result + 0 * place;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("%d", result);

    return 0;
}