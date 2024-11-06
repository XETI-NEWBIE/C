#include<stdio.h>
main(){
	int num1,num2,sum;
	printf("두 수를 입력하시오");
	scanf("%d%d",&num1,&num2); 
	printf("두 수의 합:[%d] \n",num1+num2);
	printf("두 수의 차:[%d] \n",num1-num2);
	printf("두 수의 곱:[%d] \n",num1*num2);
	printf("두 수의 평균:[%f] \n",((float)num1+(float)num2)/2);
	printf("두 수 나눠서 몫 : [%d]\n",num1/num2);
	printf("두 수 나눠서 나머지:[%d]",num1%num2);
}
