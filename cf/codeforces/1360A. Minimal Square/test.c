#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int num, a, b, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        if (a >= b)
        {
            num = 2 * b >= a ? 2 * b : a;
        }
        else
        {
            num = 2 * a >= b ? 2 * a : b;
        }
        printf("%d\n", num * num);
    }
    return 0;
}