#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int students[] = {1,1,1,0,0,1}, sandwiches[] = {1,0,0,0,1,1};
    int studentsSize = 6, sandwichesSize = 6;
    int top = 0, tail = studentsSize - 1, i = 0, j = 0,m,flag=0;
    int *des = (int *)malloc(sizeof(int) * 400);
    for (i = 0; i < studentsSize; i++)
    {
        des[i] = students[i];
    }
    for (i = top; i <= tail && j < sandwichesSize&&flag==0; i++)
    {
        flag=1;
        if (des[i] == sandwiches[j])
        {
            top++;
            j++;
        }
        else
        {
            tail++;
            des[tail] = des[i];
            top++;
        }
        for(m=top;m<=tail;m++){
            if(des[m]==sandwiches[j]){
                flag=0;
            }
        }
    }
    printf("%d", tail - top + 1);
    return 0;
}