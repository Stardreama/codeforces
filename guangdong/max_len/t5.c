#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int max = 0, i, t, num1 = 0, num2 = 0, left, right;
    scanf("%d", &t);
    int *num = (int *)malloc(100000 * sizeof(int));
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num[i]);
    }

    int *prefixSum = (int *)malloc((t + 1) * sizeof(int));
    prefixSum[0] = 0;
    for (i = 1; i <= t; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + (num[i - 1] == 0 ? 1 : -1);
    }

    int *lastSeen = (int *)malloc((2 * t + 1) * sizeof(int));
    for (i = 0; i < 2 * t + 1; i++)
    {
        lastSeen[i] = -1;
    }

    for (i = 0; i <= t; i++)
    {
        int diff = prefixSum[i] + t;
        if (lastSeen[diff] == -1)
        {
            lastSeen[diff] = i;
        }
        else
        {
            max = fmax(max, i - lastSeen[diff]);
        }
    }

    printf("%d", max);
    return 0;
}
