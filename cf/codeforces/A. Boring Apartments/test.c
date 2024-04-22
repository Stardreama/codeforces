#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int num, i, t, count = 1;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        count = 1;
        scanf("%d", &num);
        while (num > 10)
        {
            num /= 10;
            count++;
        }
        printf("%d\n", 10 * (num - 1) + count * (count + 1) / 2);
    }
    return 0;
}