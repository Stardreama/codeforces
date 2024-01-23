#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 100
int main()
{
    int a[N + 1];
    int i, j, t, l, r, m;
    int value = 100; // 查找值
    int address = 0; // 找到值的下标
    // 1.随机初始化数据
    srand(time(0)); //(1)放在循环里面怎么样
    for (i = 1; i <= N; i++)
    {
        a[i] = rand() % 200 + 1; //(2)生成随机数不重复怎么做
    }
    for (i = 1; i <= N; i++)
    {
        printf("%5d", a[i]);
        if (i % 10 == 0)
            printf("\n");
    }

    a[37] = 100;
    // 3.插入排序，阅读插入排序程序

    for (i = 2; i <= N; i++)
    {
        a[0] = a[i]; //(4)哨兵
        j = i;
        while (a[j] < a[j - 1])
        {
            t = a[j];
            a[j] = a[j - 1];
            a[j - 1] = t;
            j--;
        }
        a[j] = a[0];
    }
    // 输出看看
    printf("排序后的\n");
    for (i = 1; i <= N; i++)
    {
        printf("%5d", a[i]);
        if (i % 10 == 0)
            printf("\n");
    }
    // 二分法查找（找到的不一定是第一个）
    // 补充此部分程序
    int left = 1, right = 100, mid = 0;
    mid = (left + right) / 2;
    while (a[mid] != 100 && left < right)
    {
        if (a[mid] > 100)
        {
            right = mid - 1;
            mid = (left + right) / 2;
        }
        else
        {
            left = mid + 1;
            mid = (left + right) / 2;
        }
    }
    if (a[mid] == 100)
    {
        address = mid;
        ;
    }
    else
    {
        address = 0;
    }
    if (address)
        printf("二分法查找，位置在%d\n", address);
    else
        printf("二分法查找没有找到\n");

    return 0;
}