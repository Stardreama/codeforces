#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int num[4] = {0}, i, sum = 0, j = 0;
    char str[100001] = {'\0'};
    long long int number;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%s", str);

    while (str[j] != '\0')
    {

        sum += num[str[j] - '1'];
    }
    
    printf("%d", sum);
    return 0;
}