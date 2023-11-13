#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
/*int main()
{
    int num[10] = {9, 6, 8, 3, 4, 5, 7, 2, 1, 10};
    int i = 0, min, temp,j;
    for (j = 0; j < 9; j++)
    {
        for (i = j + 1; i < 10; i++)
        {
            min = j;
            if (num[i] < num[min])
            {
                min = i;
            }
            temp = num[j];
            num[j] = num[min];
            num[min] = temp;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}*/
// 由小到大
int main()
{
    int num[10] = {9, 6, 8, 3, 4, 5, 7, 2, 1, 10};
    int i = 0, max, temp, j;
    for (j = 0; j < 9; j++)
    {
        for (i = j + 1; i < 10; i++)
        {
            max = j;
            if (num[i] > num[max])
            {
                max = i;
            }
            temp = num[j];
            num[j] = num[max];
            num[max] = temp;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}
// 由大到小