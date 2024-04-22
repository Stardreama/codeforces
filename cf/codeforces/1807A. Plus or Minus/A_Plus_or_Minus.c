#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b, c, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a + b == c)
        {
            printf("+\n");
        }
        if (a - b == c)
        {
            printf("-\n");
        }
    }
    return 0;
}