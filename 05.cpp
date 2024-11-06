#include<stdio.h>
main(){
float num1,num2;
	float ave;
	printf("첫번째 수:");
	scanf("%f",&num1);
	printf("두번째 수:");
	scanf("%f",&num2);
	printf("두 수의 합:%.2f \n",num1+num2);
	ave=(num1+num2)/2;
	printf("두 수의 평균:%.2f",ave);	
}
	
