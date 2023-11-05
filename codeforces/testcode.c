#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int money = 0, count = 0;
    scanf("%d", &money);
    while (money != 0)
    {
        while (money / 100 > 0)
        {
            money -= 100;
            count++;
        }
        while (money / 20 > 0)
        {
            money -= 20;
            count++;
        }
        while (money / 10 > 0)
        {
            money -= 10;
            count++;
        }
        while (money / 5 > 0)
        {
            money -= 5;
            count++;
        }
        while (money / 1 > 0)
        {
            money--;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}