#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int num[6] = {0};
    int i = 0, ret = 0;
    for (i; i < 6; i++)
    {
        scanf("%d", &num[i]); // 最后一个输入-1表示结束
    }
    ret = he(num);
    printf("%d", ret);
    return 0;
}
int he(int *num)
{
    if (*num != -1)
    {
        return (*num) + he(num + 1);
    }
    else
    {
        return 0;
    }
}