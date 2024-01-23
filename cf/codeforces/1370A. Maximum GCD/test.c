#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, i, num, max_gcd = 0, j, k, gcd;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            max_gcd = num / 2;
        }
        else
        {
            max_gcd = (num - 1) / 2;
        }
        printf("%d\n", max_gcd);
    }
    return 0;
}
