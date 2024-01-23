#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, n, x, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &n, &x);
        if (n == 1 || n == 2)
        {
            printf("1\n");
        }
        else
        {
            j = 2;
            while (1)
            {
                if (n >= (3 + x * (j - 2)) && n <= (2 + (j - 1) * x))
                {
                    break;
                }
                j++;
            }
            printf("%d", j);
        }
    }
    return 0;
}