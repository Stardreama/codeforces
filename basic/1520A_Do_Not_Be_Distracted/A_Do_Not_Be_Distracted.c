#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, i, j, k, len, flag = 1;
    char str[51] = {'\0'};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        flag = 1;
        scanf("%d", &len);
        scanf("%s", str);

        for (j = 0; j <= len - 2; j++)
        {
            for (k = j + 1; k <= len - 1; k++)
            {
                if (str[j] == str[k])
                {
                    if (k == j + 1)
                    {
                        break;
                    }
                    else
                    {
                        printf("NO\n");
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
    }
    return 0;
}