#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int num[10] = {9, 6, 8, 3, 4, 5, 7, 2, 1, 10};
    int i, j, temp;
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}