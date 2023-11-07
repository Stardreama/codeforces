 #include <stdio.h>
int main(){
int n[3],i,j,k;
    for(i=0;i<3;i++)   n[i]=0;
    k=2;
    for (i=0;i<k;i++)
    for (j=0;j<k;j++)   n[j]=n[i]+1;
    printf("%d,%d\n",n[0],n[1]);
   }