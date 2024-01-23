#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, n, k, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &n, &k);
        for (j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        for (j = n; j >= k + 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}