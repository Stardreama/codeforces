#include<stdio.h>
int main(){
	int t,i,m,n,sum,flag;
	char num[3][3];
	scanf("%d",&t);
    getchar();
	for(i=0;i<t;i++){
	flag=0;
	sum=0;
		for(m=0;m<3;m++){
			for(n=0;n<3;n++){
				scanf("%c",&num[m][n]);
				if(num[m][n]=='?'){
					flag=m;
				}
			}
            getchar();
		}
		for(m=0;m<3;m++){
			sum+=num[flag][m];
		}
		printf("%C\n",198-(sum-'?'));
	}
	return 0;
}