#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
double add(double x, double y);
double jian(double x, double y);
double cheng(double x, double y);
double chu(double x, double y);
void calu(double (*pf)(double, double));
int main()
{
    int mode = 0;
    double x = 0, y = 0;

    do
    {
        printf("请选择模式\n");
        printf("**********************\n");
        printf("**1.加法  2.减法*******\n");
        printf("**3.乘法  4.除法*******\n");
        printf("**5.退出    ***********\n");
        scanf("%d", &mode);

        switch (mode)
        {
        case 1:
            calu(add);
            break;
        case 2:
            calu(jian);
            break;
        case 3:
            calu(cheng);
            break;
        case 4:
            calu(chu);
            break;
        case 5:
            break;
        default:
            printf("请重新选择");
        }
    } while (mode != 5);
    return 0;
}
double add(double x, double y)
{
    return x + y;
}
double jian(double x, double y)
{
    return x - y;
}
double cheng(double x, double y)
{
    return x * y;
}
double chu(double x, double y)
{
    return x / y;
}
void calu(double (*pf)(double, double))
{
    double x, y, ret;
    printf("请输入两个数\n");
    scanf("%lf%lf", &x, &y);
    ret = pf(x, y);
    printf("%f\n", ret);
}