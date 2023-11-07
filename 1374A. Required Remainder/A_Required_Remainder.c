#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, i, x, y, n, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d", &x, &y, &n);
        j=(n-y)/x;
        printf("%d\n",j*x+y);
    }
    return 0;
}