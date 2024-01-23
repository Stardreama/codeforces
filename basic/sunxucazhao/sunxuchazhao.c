#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 100
int main()
{
    int a[N + 1];
    int i;
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
    a[37] = 100; // 确保能找到值为100的数据
    // 2.顺序查找  找到第一个值为value的元素下标
    /*对于任意一个序列以及一个给定的元素，将给定元素与序列中元素依次比较，直到找出与给定关键字相同的第一个元素，或者将序列中的元素与其都比较完为止。*/
    // 补充此部分程序
    for (i = 1; i <= N; i++)
    {
        if (a[i] == 100)
        {
            address = i;
            break;
        }
    }

    if (address)
        printf("顺序查找，位置在%d\n", address);
    else
        printf("顺序查找没有找到\n");
}