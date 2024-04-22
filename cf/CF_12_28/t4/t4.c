#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, len, V[10000], j, num = 0, k = 0, flag = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        k = 0;
        num=0;
        k=0;
        scanf("%d", &len);
        char *str = (char *)malloc(sizeof(char) * (len + 1));
        scanf("%s", str);
        for (j = 0; j < len; j++)
        {
            if (str[j] == 'a' || str[j] == 'e')
            {
                V[num++] = j;
            }
        }
        for (j = 0; j < len; j++)
        {
            printf("%c", str[j]);
            if (j == V[k] && k < num - 1)
            {
                if (V[k + 1] - V[k] == 2)
                {
                    printf(".");
                }
                else
                {
                    flag = 1;
                }
                k++;
                continue;
            }
            if (flag == 1&&k<num)
            {
                printf(".");
                flag = 0;
            }
        }
        printf("\n");
        free(str);
    }
    return 0;
}