#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int num[10] = {9, 6, 8, 3, 4, 5, 7, 2, 1, 10};
    int i, j, temp;
    for (j = 0; j < 9; j++)
    {
        for (i = j + 1; i > 0; i--)
        {
            if (num[i] < num[i - 1])
            {
                temp = num[i - 1];
                num[i - 1] = num[i];
                num[i] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}