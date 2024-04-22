#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
void find_max(int *num, int *max1, int *max2);
int main()
{
    int t, i, len, num[26] = {0}, j, max1 = 0, max2 = 0, max3 = 0;
    char *str = (char *)malloc(sizeof(char) * 200001);
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &len);
        scanf("%s", str);
        max1 = 0;
        max2 = 0;
        for (j = 0; j < len; j++)
        {
            num[str[j] - 'a']++;
        }
        find_max(num, &max1, &max2);
        while (num[max2] > 0&&max1!=max2)
        {
            num[max1]--;
            num[max2]--;
            find_max(num, &max1, &max2);
        }
        printf("%d\n", num[max1]);
        for (j = 0; j < 26; j++)
        {
            num[j] = 0;
        }
    }
    return 0;
}
void find_max(int *num, int *max1, int *max2)
{
    int i;
    for (i = 0; i < 26; i++)
    {
        if (num[i] > num[*max1])
        {
            *max1 = i;
        }
    }
    if(*max1!=25){
        *max2 = *max1 + 1;
    }
    else{
        *max2=0;
    }
    for (i = 0; i < 26; i++)
    {
        if (num[i] > num[*max2] && i != *max1)
        {
            *max2 = i;
        }
    }
}