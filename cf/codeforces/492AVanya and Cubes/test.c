#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int i = 1, num, sum = 0;
    scanf("%d", &num);
    while (num >= sum)
    {
        sum += i * (i + 1) / 2;
        i++;
    }
    printf("%d", i - 2);
    return 0;
}