#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, n, *num, j, p, q, temp, flag;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        flag = 0;
        num = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
        }
        for (p = 0; p < n - 1; p++)
        {
            for (q = 0; q < n - 1 - p; q++)
            {
                if (num[q] > num[q + 1])
                {
                    temp = num[q];
                    num[q] = num[q + 1];
                    num[q + 1] = temp;
                }
            }
        }
        for (j = 0; j < n - 1; j++)
        {
            if (num[j] == num[j + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        free(num);
    }
    return 0;
}