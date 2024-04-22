#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t, i, n, p, q, count;
    char str[11] = {'\0'}, des[6] = "Timru", base;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d", &n);
        scanf("%s", str);
        if (n == 5)
        {
            for (p = 1; p < 5; p++)
            {
                base = str[p];
                for (q = p - 1; (q >= 0) && (str[q] > base); q--)
                {
                    str[q + 1] = str[q];
                }
                str[q + 1] = base;
            }
            for (p = 0; p < 5; p++)
            {
                if (str[p] == des[p])
                {
                    count++;
                }
            }
            if (count == 5)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}