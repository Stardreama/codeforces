#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n, m = 0, t, i, temp = 0, j, p, q, flag = 1;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        m = 0;
        flag = 1;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &temp);
            if (temp == 1)
            {
                m++;
            }
        }
        if ((2 * n - m) % 2 != 0)
        {
            printf("no\n");
        }
        else
        {
            for (p = 0; (p <= m) && (flag == 1); p++)
            {
                for (q = 0; (q <= n - m) && (flag == 1); q++)
                {
                    if (2 * p + 4 * q == 2 * n - m)
                    {
                        printf("yes\n");
                        flag = 0;
                    }
                }
            }
            if (flag)
            {
                printf("no\n");
            }
        }
    }
    return 0;
}