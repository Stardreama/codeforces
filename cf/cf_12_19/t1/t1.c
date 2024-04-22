#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int i, t, min, j, num[26] = {0}, count;
    char str[501] = {'\0'};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d", &min);
        scanf("%s", str);
        for (j = 0; j < min; j++)
        {
            num[str[j] - 'A']++;
        }
        for (j = 0; j < 26; j++)
        {
            if (num[j] >= j + 1)
            {
                count++;
            }
            num[j] = 0;
        }
        printf("%d\n", count);
    }
    return 0;
}