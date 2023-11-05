#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int num[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int i = 0, min = 0, temp = 0, j = 0;
    for (j = 0; j < 9; j++)
    {
        min = j;
        for (i = j + 1; i < 10; i++)
        {
            if (num[i] < num[min])
            {
                min = i;
            }
        }
        temp = num[min];
        num[min] = num[j];
        num[j] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}