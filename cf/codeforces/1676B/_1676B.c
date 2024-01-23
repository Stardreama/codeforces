#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, *candy, num, min = 10000000, j, sum;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        min = 100000000;
        sum = 0;
        candy = (int *)malloc(sizeof(int) * num);
        for (j = 0; j < num; j++)
        {
            scanf("%d", &candy[j]);
            if (candy[j] < min)
            {
                min = candy[j];
            }
        }
        for (j = 0; j < num; j++)
        {
            sum += (candy[j] - min);
        }
        printf("%d\n", sum);
        free(candy);
    }
    return 0;
}