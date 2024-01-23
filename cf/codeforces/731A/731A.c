#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int find_min(char a, char b)
{
    return abs(a - b) > (26 - abs(a - b)) ? (26 - abs(a - b)) : abs(a - b);
}
int main()
{
    char str[101] = {'\0'};
    int len, i, count = 0;
    scanf("%s", str);
    len = strlen(str);
    count += find_min('a', str[0]);
    for (i = 0; i <= len - 2; i++)
    {
        count += find_min(str[i], str[i + 1]);
    }
    printf("%d\n", count);
    return 0;
}