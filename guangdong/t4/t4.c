#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int greatest_divisor(int a, int b)
{
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int main()
{
    int t, i, a, b, div, m = 0, n = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        m = 0;
        n = 0;
        scanf("%d%d", &a, &b);
        div = greatest_divisor(a, b);
        a = a / div;
        b = b / div;
        while (a > pow(6, m))
        {
            m++;
        }
        if (a == pow(6, m))
        {
            while (b > pow(5, n))
            {
                n++;
            }
            if (b == pow(5, n))
            {
                printf("%d\n", m + n);
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}