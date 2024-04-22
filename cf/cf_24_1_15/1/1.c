#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, j = 0, len;
    int num[4][2];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d%d", &num[j][0], &num[j][1]);
        }
        for (j = 1; j < 4; j++)
        {
            if (num[j][0] == num[0][0])
            {
                len = abs(num[j][1] - num[0][1]);
                printf("%d\n", len * len);
                break;
            }
        }
    }
    return 0;
}