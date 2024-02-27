#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, j, n, *num = NULL, sum, avg, flag, flag2;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        sum = 0;
        flag = 0;
        flag2 = 0;
        int *num = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
            sum += num[j];
        }
        avg = sum / n;
        for (j = 0; j < n; j++)
        {
            flag += num[j] - avg;
            if (flag < 0)
            {
                printf("NO\n");
                flag2 = 1;
                break;
            }
        }
        if (!flag2)
        {
            printf("YES\n");
        }
    }
    return 0;
}