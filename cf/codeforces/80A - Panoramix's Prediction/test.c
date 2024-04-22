#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int i, a, b, flag = 1;
    int a1[16] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    scanf("%d%d", &a, &b);
    for (i = 0; i < 15; i++)
    {
        if (a1[i] == a && a1[i + 1] == b)
        {
            printf("YES");
            flag = 0;
        }
    }
    if (flag)
    {
        printf("NO");
    }
    return 0;
}