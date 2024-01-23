#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int i, t, len, num[26] = {0}, j, sum = 0;
    char str[51] = {'\0'};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &len);
        scanf("5s", str);
        for (j = 0; j < len; j++)
        {
            num[str[i] - 'A']++;
        }
        for (j = 0; j < 26; j++)
        {
            if (num[j] != 0)
            {
                sum += num[j] + 1;
            }
        }
        printf("%d\n", sum);
        for (j = 0; j < 26; j++)
        {
            num[j] = 0;
        }
    }
    return 0;
}