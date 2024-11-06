#include<stdio.h>
main(){
	int i,n,m,cnt;
	cnt=0;
	puts("첫번째 숫자 :");
	scanf("%d",&n);
	puts("마지막 숫자 :");
	scanf("%d",&m); 
	for(i=n;i<=m;i++){
		if(i%2==0)
		cnt=cnt+1;
	}
	printf("%d에서 %d까지 2의 배수의 개수 : %d\n",n,m,cnt);
}
