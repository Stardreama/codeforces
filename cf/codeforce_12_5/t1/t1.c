#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char str[3] = {'\0'};
    int t, i, n;
    char m = 'a';
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", str);
        n = str[1] - '0';
        for (m = 'a'; m <= 'h'; m++)
        {
            if (m != str[0])
            {
                printf("%c%d\n", m, n);
            }
        }
        m = str[0];
        for (n = 1; n <= 8; n++)
        {
            if (n != str[1] - '0')
            {
                printf("%c%d\n", m, n);
            }
        }
    }
    return 0;
}