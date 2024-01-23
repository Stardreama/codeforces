#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char *des = (char *)malloc(sizeof(char) * 1000000);
    int *low = (int *)malloc(sizeof(int) * 1000000);
    int *up = (int *)malloc(sizeof(int) * 1000000);
    int t, i, j, len, m, p = 0, q = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", des);
        len = strlen(des);
        p = 0;
        q = 0;
        for (j = 0; j < len; j++)
        {
            if (des[j] >= 'a' && des[j] <= 'z' && des[j] != 'b')
            {
                low[p++] = j;
            }
            if (des[j] >= 'A' && des[j] <= 'Z' && des[j] != 'B')
            {
                up[q++] = j;
            }
            if (des[j] == 'b')
            {
                if (p != 0)
                {
                    des[low[--p]] = '0';
                }
                des[j] = '0';
            }
            if (des[j] == 'B')
            {
                if (q != 0)
                {
                    des[up[--q]] = '0';
                }
                des[j] = '0';
            }
        }
        for (j = 0; j < len; j++)
        {
            if (des[j] != '0')
            {
                printf("%c", des[j]);
            }
            des[j] = '\0';
        }
        printf("\n");
    }
    return 0;
}