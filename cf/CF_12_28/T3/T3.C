#include<stdio.h>
#include<math.h>
int main(){
    int t,i,j,num,number,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&num);
        sum=0;
        for(j=0;j<num;j++){
            scanf("%d",&number);
            sum+=number;
        }
        j=sqrt(sum);
        if(j*j==sum||(j-1)*(j-1)==sum||(j+1)*(j+1)==sum){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}