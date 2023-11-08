#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int find_max(int x);
int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    c = 6 - c + 1;
    d = find_max(c);
    printf("%d/%d", c / d, 6 / d);
    return 0;
}
int find_max(int x)
{
    int y;
    if (x != 5)
    {
        while (6 % x != 0)
        {
            y = 6 % x;
            x = y;
        }
    }
    else
    {
        x = 1;
    }

    return x;
}