#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, a, b, c, n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d%d", &a, &b, &c, &n);
        if ((2 * n >= a + c - 2 * b) && (2 * n >= a + b - 2 * c) && (2 * n >= b + c - 2 * a) && (a + c - 2 * b+n >= 0) && (a + b - 2 * c+n >= 0) && (b + c - 2 * a+n >= 0) && ((a + b - 2 * c + n) % 3 == 0) && ((a + c - 2 * b + n) % 3 == 0) && ((c + b - 2 * a + n) % 3 == 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}