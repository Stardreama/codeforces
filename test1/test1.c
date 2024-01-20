#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int len, i, x = 0, y = 0, t, j, flag;
    scanf("%d", &t);
    for (j = 0; j < t; j++)
    {
        x = 0, y = 0, flag = 0;
        scanf("%d", &len);
        char *str = (char *)malloc(sizeof(char) * (len + 1));
        scanf("%s", str);
        for (i = 0; i < len; i++)
        {
            if (str[i] == 'L')
            {
                x--;
            }
            else if (str[i] == 'R')
            {
                x++;
            }
            else if (str[i] == 'U')
            {
                y++;
            }
            else if (str[i] == 'D')
            {
                y--;
            }
            if (x == 1 && y == 1)
            {
                printf("YES\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
        free(str);
    }
    return 0;
}