#include <stdio.h>

int knapsack(int s, int n, int weights[])
{
    if (s == 0)
        return 1;
    if (s < 0 || (s > 0 && n == 0))
        return 0;

    if (knapsack(s - weights[n - 1], n - 1, weights))
    {
        printf("%4d", weights[n - 1]);
        return 1;
    }
    else
    {
        return knapsack(s, n - 1, weights);
    }
}
int main()
{
    int s = 17, n = 8, weights[8] = {1, 2, 2, 1, 2, 3, 8, 5};

    if (!knapsack(s, n, weights))
        printf("no");
    return 0;
}