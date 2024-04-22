#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int a, t, i, c1, c2;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        if (a % 3 == 0)
        {
            c2 = a / 3;
        }
        else if (a % 3 == 1)
        {
            c2 = a / 3;
        }
        else
        {
            c2 = a / 3 + 1;
        }
        c1 = a - 2 * c2;
        printf("%d%d\n", c1, c2);
    }
    return 0;
}