#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, num, res;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("%d\n", num / 2);
        }
        else
        {
            printf("%d\n", (num - 1) / 2 + 1);
        }
    }
    return 0;
}