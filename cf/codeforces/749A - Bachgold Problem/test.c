#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d\n",a/2);
        for (i = 0; i < a / 2; i++)
        {
            printf("2\t");
        }
    }
    else
    {
        printf("%d\n",a/2);
        for (i = 0; i < a / 2 - 1; i++)
        {
            printf("2\t");
        }
        printf("3");
    }
    return 0;
}