#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a+b<10)&&(a+c<10)&&(b+c<10)){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}