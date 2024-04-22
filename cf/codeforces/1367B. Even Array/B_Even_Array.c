#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, i, n, j, num1 = 0, k = 0, num2 = 0, count = 1, count1 = 0, count2 = 0, min = 0, flag = 0;
    int num[1001] = {0};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        num1 = 0, num2 = 0;
        min = 0;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
        }
        for (j = 0; j < n; j++)
        {
            if (num[j] % 2 == 0)
            {
                num1++;
            }
            if (num[j] % 2 == 1)
            {
                num2++;
            }
        }
        if((n%2==0&&num1==num2)||(n%2==1&&num1==num2+1))
        {
            for (j = 0; j < n; j++)
            {
                if (num[j] % 2 != j % 2 && count % 2 == 1 && flag == 0)
                {
                    count1 = j;
                    count++;
                    flag = 1;
                }
                if (num[j] % 2 != j % 2 && count % 2 == 0 && flag == 0)
                {
                    count2 = j;
                    count++;
                }
                if (count != 1 && count % 2 == 1)
                {
                    min ++;
                    count = 1;
                }
                flag = 0;
            }
            printf("%d\n", min);
        }
        else{
            printf("-1\n");
        }
        for (k = 0; k < n; k++)
        {
            num[k] = 0;
        }
    }
    return 0;
}