#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char str[101] = {'\0'};
    int len, t, i, j, count;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        count = 0;
        scanf("%s", str);
        len = strlen(str);
        if (len % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            for (j = 0; j <= len / 2; j++)
            {
                if (str[j] == str[j + len / 2])
                {
                    count++;
                }
            }
            if (count == len / 2)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        for (j = 0; j < len; j++)
        {
            str[j] = '\0';
        }
    }
    return 0;
}