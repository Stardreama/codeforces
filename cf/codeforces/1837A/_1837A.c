#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char str[4] = {'\0'};
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", str);
        if ((str[0] == 'b' && str[1] == 'c' && str[2] == 'a') || (str[0] == 'c' && str[1] == 'a' && str[2] == 'b'))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}