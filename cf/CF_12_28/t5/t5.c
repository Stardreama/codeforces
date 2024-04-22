#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, n, j, l, r, sum1, sum2, flag = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        flag=0;
        int *num = (int *)malloc(sizeof(int) * (n + 1));
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
        }
        for (l = 0; l < n - 1; l++)
        {
            for (r = l + 1; r < n; r++)
            {
                sum1 = sum2 = 0;
                for (j = l; j <= r; j++)
                {
                    if ((j + 1) % 2 == 0)
                    {
                        sum2 += num[j];
                    }
                    else
                    {
                        sum1 += num[j];
                    }
                }
                if (sum1 == sum2)
                {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
        free(num);
    }
}