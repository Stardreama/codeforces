#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int fib(int n);
int main()
{
    int n, res;
    scanf("%d", &n);
    res = fib(n);
    printf("%d", res);
    return 0;
}
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}