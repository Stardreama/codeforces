#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int sum = 0, t, x1, x2, x3, i, time, j, max, p, y1, y2, y3;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &time);
        sum = 0;
        int num[3][100000];
        for (p = 0; p < 3; p++)
        {
            for (j = 0; j < time; j++)
            {
                scanf("%d", &num[p][j]);
            }
        }
        max = 0;
        
        printf("%d\n", sum);
    }
}