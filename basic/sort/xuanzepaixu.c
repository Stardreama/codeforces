#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
void selectionsort(int *nums, int n);
void insertsort_1(int *nums, int n);
void selectsort_1(int *nums, int n);
void bubblesort_1(int *nums, int n);
int main()
{
    char a;
    printf("%d", sizeof(a));
    int num[10] = {9, 6, 8, 3, 4, 5, 7, 2, 1, 10}, i;
    selectsort_1(num, sizeof(num) / sizeof(num[0]));
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}
void selectionsort(int *nums, int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }
}
void bubblesort(int *nums, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
void bubblesort_optimization(int *nums, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
            flag = true;
        }
        if (!flag)
        {
            break;
        }
    }
}
void insertsort(int *nums, int n)
{
    int i, base, j;
    for (i = 1; i < n; i++)
    {
        base = nums[i];
        for (j = i - 1; (j >= 0) && (nums[j] > base); j--)
        {
            nums[j + 1] = nums[j];
        }
        nums[j + 1] = base;
    }
}
void bubblesort_1(int *nums, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
void selectsort_1(int *nums, int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        temp = nums[min];
        nums[min] = nums[i];
        nums[i] = temp;
    }
}
void insertsort_1(int *nums, int n)
{
    int i, j, base;
    for (i = 1; i < n; i++)
    {
        base = nums[i];
        for (j = i - 1; (j >= 0) && (base < nums[j]); j--)
        {
            nums[j + 1] = nums[j];
        }
        nums[j + 1] = base;
    }
}