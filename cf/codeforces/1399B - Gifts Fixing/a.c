#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int find_max(int a, int b);
int main()
{
    int t, i, n, j, num1[50] = {0}, num2[50] = {0}, min1 = 1000000000, min2 = 1000000000;
    long long int sum=0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        sum = 0;
        min1=1000000000;
        min2=1000000000;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num1[j]);
            if (num1[j] < min1)
            {
                min1 = num1[j];
            }
        }
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num2[j]);
            if (num2[j] < min2)
            {
                min2 = num2[j];
            }
        }
        for (j = 0; j < n; j++)
        {
            sum += find_max(num1[j] - min1, num2[j] - min2);
        }
        printf("%lld\n", sum);
    }
    return 0;
}
int find_max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}