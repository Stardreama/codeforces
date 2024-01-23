#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
int main()
{
    int t, i, count = 0, j;
    int num[4] = {0};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d%d%d%d", &num[0], &num[1], &num[2], &num[3]);
        for (j = 1; j < 4; j++)
        {
            if (num[j] > num[0])
            {
                count++;
            }
        }
        printf("%d", count);
    }
    return 0;
}