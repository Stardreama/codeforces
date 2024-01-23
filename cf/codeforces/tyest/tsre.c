#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()

{

       int a[3]={1,2,3};

       int *b[3]={&a[1],&a[2],&a[3]};

       int **p = b;

       return  0;

}