#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
void insertsort(int *nums, int n);
int main()
{
    int i, t, n, num[50] = {0}, j, min = 100000000;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        min = 100000000;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
        }
        insertsort(num, n);
        for (j = 0; j < n - 1; j++)
        {
            if (num[j + 1] - num[j] < min)
            {
                min = num[j + 1] - num[j];
            }
        }
        printf("%d\n", min);
    }
    return 0;
}
void insertsort(int *nums, int n)
{
    int i, j, base;
    for (i = 1; i < n; i++)
    {
        base = nums[i];
        for (j = i - 1; (j >= 0) && (base < nums[j]); j--)
        {
            nums[j + 1] = nums[j];
        }
        nums[j + 1] = base;
    }
}