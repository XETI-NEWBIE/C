#include<stdio.h>
main(){
	int i,n;
	char name[10];
	printf("반복하고 싶은 말은?"); 
	scanf("%s",&name);
	printf("몇 번 반복할깝쇼?");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		printf("%s \n", name);
	}
	printf("\n %s를 %d회 반복", name, n);
}
