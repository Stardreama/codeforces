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
<<<<<<< HEAD
=======
void jinzhi(int x)
{
    int yu = 1, N = 2, temp;
    if (x != 0)
    {
        yu = x % 2;
        x = (x - yu) / N;
        jinzhi(x);
        printf("%d", yu);
    }
}
>>>>>>> 0bcf9048f3aac3bfc4edc4d65e21f29be3a70864
