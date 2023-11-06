#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, i, j, k, n, m;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &j);
        if ((j / 2 - 1) % 2 == 0)
        {
            printf("NO");
        }
        else
        {
            printf("YES\n");
            for (k = 0, n = 2; k < j / 2; k++)
            {

                printf("%d\t", n);
                n += 2;
            }
            m = n - 2;
            for (k = 0, n = 1; k < j / 2 - 1; k++)
            {

                printf("%d\t", n);
                n += 2;
            }
            printf("%d", m + j / 2 - 1);
        }
        printf("\n");
    }
    return 0;
}