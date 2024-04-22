#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, n, j, count;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d", &n);
        char *str1 = (char *)malloc(sizeof(char) * (n + 1));
        char *str2 = (char *)malloc(sizeof(char) * (n + 1));
        scanf("%s", str1);
        scanf("%s", str2);
        for (j = 0; j < n; j++)
        {
            if (str1[j] == 'R' && str2[j] == 'R')
            {
                count++;
            }
            else if ((str1[j] == 'B' || str1[j] == 'G') && (str2[j] == 'B' || str2[j] == 'G'))
            {
                count++;
            }
        }
        if (count == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        free(str1);
        free(str2);
    }
}