#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
long long find_min(long long a, long long b)
{
    return a < b ? a : b;
}
int main()
{
    int t, i, n, f, a, b, j, num;
    long long cost1, cost2;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        num = 0;
        scanf("%d%d%d%d", &n, &f, &a, &b);
        long long int *ptime = (long long int *)malloc(sizeof(long long int) * n);
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &ptime[j]);
        }
        while (f > 0)
        {
            cost1 = b;
            if (num == 0)
            {
                cost2 = a * ptime[num];
            }
            else
            {
                cost2 = a * (ptime[num] - ptime[num - 1]);
            }
            num++;
            f -= find_min(cost1, cost2);
            if (num == n)
            {
                break;
            }
        }
        if (f > 0 && num == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        free(ptime);
    }
    return 0;
}