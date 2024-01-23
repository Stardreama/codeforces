#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int same(char *now, char *des, int n);
int main()
{
    int t, i, n, cur_num, des_num, j, count;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        cur_num = des_num = 0;
        char *now = (char *)malloc(sizeof(char) * (n + 1));
        char *des = (char *)malloc(sizeof(char) * (n + 1));
        scanf("%s", now);
        scanf("%s", des);
        for (j = 0; j < n; j++)
        {
            if (now[j] == '1')
            {
                cur_num++;
            }
            if (des[j] == '1')
            {
                des_num++;
            }
        }
        if (cur_num >= des_num)
        {
            count = cur_num - same(now, des, n);
        }
        else
        {
            count = des_num - same(now, des, n);
        }
        printf("%d\n", count);
        free(des);
        free(now);
    }
    return 0;
}
int same(char *now, char *des, int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (now[i] == des[i] && now[i] == '1')
        {
            count++;
        }
    }
    return count;
}