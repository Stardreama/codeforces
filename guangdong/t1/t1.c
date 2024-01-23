#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int i,t,x,y,z,des;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&x,&y,&z);
        des=(x+y)%7;
        if(des+z<=7){
            printf("%d\n",des+z);
        }
        else{
            printf("%d\n",des+z-7);
        }
    }
    return 0;
}