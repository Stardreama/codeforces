#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
void jinzhi(int x); // 将十进制转换为二进制
int main()
{
    int num;
    scanf("%d", &num);
    jinzhi(num);
    return 0;
}
