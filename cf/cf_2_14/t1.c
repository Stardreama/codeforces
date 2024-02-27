#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int t,i=0,num,x,y,z,flag=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&num);
        flag=0;
        for(x=1;x<=26;x++){
            for(y=1;y<=26;y++){
                for(z=1;z<=26;z++){
                    if(x+y+z==num){
                        printf("%c%c%c\n",x+96,y+96,z+96);
                        flag=1;
                        break;
                    }
                }
                if(flag){
                    break;
                }
            }
            if(flag){
                    break;
                }
        }
    }
    return 0;
}