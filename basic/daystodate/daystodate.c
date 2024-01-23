#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int daystodate(int day);
int isrun(int year);
int main()
{
    int day, ret;
    printf("请输入距离1970年1月1日的天数\n");
    scanf("%d", &day);
    daystodate(day + 1);
    ret = day % 7;
    if (ret <= 3)
    {
        printf("星期%d", 4+ret);
    }
    else
    {
        printf("星期%d", ret - 7);
    }
    return 0;
}
int isrun(int year)
{
    int ret = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        ret = 1;
    }
    return ret;
}
int daystodate(int day)
{
    int year1 = 1970, i;
    int num[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (day >= 365)
    {
        if (isrun(year1))
        {
            day -= 366;
        }
        else
        {
            day -= 365;
        }
        year1++;
    }

    if (isrun(year1))
    {
        num[2] = 29;
    }
    for (i = 1; day >= 32; i++)
    {
        day -= num[i];
    }
    printf("%d年%d月%d日", year1, i, day);
    return 0;
}
int datetodays(int year, int month, int day)
{
    int year1 = 1970, i, sum = 0, j;
    int num[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (year1; year1 < year; year1++)
    {
        if (isrun(year1) == 1)
        {
            num[2] = 29;
        }
        else
        {
            num[2] = 28;
        }
        for (i = 1; i <= 12; i++)
        {
            sum += num[i];
        }
    }
    if (isrun(year) == 1)
    {
        num[2] = 29;
    }
    else
    {
        num[2] = 28;
    }
    for (j = 1; j < month; j++)
    {
        sum += num[j];
    }
    sum += day;
    return sum;
}