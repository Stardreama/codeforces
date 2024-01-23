#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int datetodays(int year, int month, int day);
int isrun(int year);
int main()
{
    int year1, year2, month1, month2, day1, day2, dis = 0;
    printf("请输入第一个日期\n");
    scanf("%d%d%d", &year1, &month1, &day1);
    printf("请输入第二个日期\n");
    scanf("%d%d%d", &year2, &month2, &day2);
    dis = datetodays(year2, month2, day2) - datetodays(year1, month1, day1);
    printf("两个日期相距%d天\n", dis);
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
int isrun(int year)
{
    int ret = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        ret = 1;
    }
    return ret;
}
