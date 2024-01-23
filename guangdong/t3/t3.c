#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int i = 1, j = 0, t, des = 1;
    scanf("%d", &t);
    for (j = 0; j < t; j++)
    {
        scanf("%d", &j);
        for (i = 1; i <= j; i++)
        {
            if (i % 4 == 1)
            {
                des = (9 * des) % 10;
            }
            if (i % 4 == 2)
            {
                des = (5 * des) % 10;
            }
            if (i % 4 == 3)
            {
                des = (3 * des) % 10;
            }
            if (i % 4 == 4)
            {
                des = (7 * des) % 10;
            }
        }
        printf("%d", des);
    }
    return 0;
}