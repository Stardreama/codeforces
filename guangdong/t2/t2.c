#include <stdlib.h>

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int m,n,i,num,count1=0,count2=0;
    char str[4]={'\0'};
    int** pro=(int**)malloc(10001*sizeof(int*));
    for(m=0;m<10001;m++){
        pro[m]=(int*)malloc(2*sizeof(int));
        pro[m][0]=0;
        pro[m][1]=0;
    }
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d %s",&num,str);
        if(num>=1&&num<=10000)
        if(str[0]=='A'){
            pro[num][0]++;
        }
        if(pro[num][0]==0){
            pro[num][1]++;
        }
    }
    for(i=1;i<10001;i++){
        if(pro[i][0]>0){
            count1++;
            count2+=pro[i][1];
        }
    }
    printf("%d %d",count1,count2);
    for (int i = 0; i < 10001; i++) {
        free(pro[i]);
    }
    free(pro);
    return 0;
}