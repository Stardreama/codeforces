#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, i, j = 0, number;
    int num[1000] = {0};
    for (i = 1; num[999] == 0; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            num[j] = i;
            j++;
        }
    }
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &number);
        printf("%d\n", num[number - 1]);
    }
    return 0;
}