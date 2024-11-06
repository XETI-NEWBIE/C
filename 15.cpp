#include<stdio.h>
main(){
	int i,n,m,sum;
	sum=0;
	puts("첫번쨰 숫자 :");
	scanf("%d",&n);
	for(i=n;i<=m;i++){
		if(i%2!=0)
		sum=sum+i;
	}
	printf("%d에서 %d까지 홀수의 합 : %d\n",n,m,sum);
}
