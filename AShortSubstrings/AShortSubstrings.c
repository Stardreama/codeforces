#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, i, len, j;
    char str[101] = {'\0'};
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        j = 0;
        scanf("%s", str);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (j == 0 || (j + 1) % 2 == 0)
            {
                printf("%c", str[j]);
            }
            str[j] = '\0';
        }
        printf("\n");
    }
    return 0;
}