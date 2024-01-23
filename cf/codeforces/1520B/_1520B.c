#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, count, j, flag;
    char str[20] = {'\0'};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        flag = -1;
        scanf("%s", str);
        count = strlen(str);
        if (count == 1)
        {
            printf("%d\n", str[0] - '0');
        }
        else
        {
            j = 0;
            while (j < count - 1)
            {
                if (str[j + 1] < str[j])
                {
                    flag = 0;
                    break;
                }
                else if (str[j + 1] > str[j])
                {
                    flag = 1;
                    break;
                }
                j++;
            }
            if (flag == -1 || flag == 1)
            {
                printf("%d\n", 9 * (count - 1) + str[0] - '0');
            }
            else
            {
                printf("%d\n", 9 * (count - 1) + str[0] - '0' - 1);
            }
        }
        for (j = 0; j < 20; j++)
        {
            str[j] = '\0';
        }
    }
    return 0;
}