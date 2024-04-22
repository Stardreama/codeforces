#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int k, t, j, i, num1[30] = {0}, num2[30] = {0}, num, m, n, temp, sum;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        scanf("%d", &k);
        sum = 0;
        for (j = 0; j < num; j++)
        { // 读取
            scanf("%d", &num1[j]);
        }
        for (j = 0; j < num; j++)
        {
            scanf("%d", &num2[j]);
        }
        // maopao
        for (m = 0; m < num - 1; m++)
        {
            for (n = 0; n < num - 1 - m; n++)
            {
                if (num1[n] > num1[n + 1])
                {
                    temp = num1[n];
                    num1[n] = num1[n + 1];
                    num1[n + 1] = temp;
                }
                if (num2[n] > num2[n + 1])
                {
                    temp = num2[n];
                    num2[n] = num2[n + 1];
                    num2[n + 1] = temp;
                }
            }
        }
        // jiaohuan
        j = 0;
        while (num1[j] < num2[num - 1 - j] && k > 0)
        {
            temp = num1[j];
            num1[j] = num2[num - 1 - j];
            j++;
            k--;
        }
        // qiuhe
        for (j = 0; j < num; j++)
        {
            sum += num1[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}