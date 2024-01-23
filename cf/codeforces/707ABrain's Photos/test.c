#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int flag = 1, i, m, n;
    char str;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m * n; i++)
    {
        scanf("%c", &str);
        if (str == 'C' || str == 'M' || str == 'Y')
        {
            flag = 0;
        }
    }
    if (flag)
    {
        printf("#Black&White");
    }
    else
    {
        printf("#Color");
    }
    return 0;
}