#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int mymax(int sum1, int sum2, int n,int*num)
{
    if (sum1 == n)
    {
        return n;
    }
    else
    {
        if (num[0] ==num[n-1] )
        {
            return sum1 + sum2;
        }
        else
        {
            return sum1 > sum2 ? sum1 : sum2;
        }
    }
}
int main()
{
    int t, i, n, j, k, *num = NULL, sum1, sum2;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        sum1 = sum2 = 1;
        int *num = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
        }
        if (n == 2)
        {
            if (num[0] != num[1])
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if (n == 1)
        {
            printf("0\n");
        }
        else
        {
            // 前面
            for (j = 1; j < n; j++)
            {
                if (num[j] == num[0])
                {
                    sum1++;
                }
                else
                {
                    break;
                }
            }
            // 后面
            for (j = n - 2; j >= 0; j--)
            {
                if (num[j] == num[n - 1])
                {
                    sum2++;
                }
                else
                {
                    break;
                }
            }
            printf("%d\n", n - mymax(sum1, sum2, n,num));
        }
        free(num);
    }
    return 0;
}