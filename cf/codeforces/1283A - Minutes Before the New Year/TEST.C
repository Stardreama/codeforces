#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int hour, min, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &hour, &min);
        printf("%d\n", 24 * 60 - 60 * hour - min);
    }
    return 0;
}