#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int isnotdifferent(int *num, int max_left, int max_right);
int main()
{
    int i, t, j, m, sum, left = 0, right = 0, sum1 = 0, max_left = 0, max_right = 0, ret = 1;
    int temp_max_left, temp_max_right, temp_sum;
    int num[200000] = {0};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &m);
        sum = -100000;
        sum1 = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &num[j]);
        }
        for (left = 0; left < m; left++)
        {
            for (right = left; right < m; right++)
            {
                sum1 = 0;
                max_left = 0;
                max_right = 0;
                for (j = left; j <= right; j++)
                {
                    sum1 += num[j];
                }
                if (sum1 > sum)
                {
                    temp_max_left = max_left;
                    temp_max_right = max_right;
                    temp_sum = sum;
                    sum = sum1;
                    max_left = left;
                    max_right = right;
                }
                if (isnotdifferent(num, max_left, max_right))
                {
                    sum = temp_sum;
                    max_left = temp_max_left;
                    max_right = temp_max_right;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
int isnotdifferent(int *num, int max_left, int max_right)
{
    int ret = 0, i;
    if (max_left != max_right)
    {
        for (i = max_left; i <= max_right - 1; i++)
        {
            if ((abs(num[i]) + abs(num[i + 1])) % 2 != 1)
            {
                ret = 1;
            }
        }
    }
    return ret;
}