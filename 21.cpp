#include<stdio.h>
void hi(void);
int input_num(int n);

int input_num(int n){
	int sum;
	printf("입력된 숫자는 %d입니다잉\n",n);
	sum=n+n;
	return sum;
    }
int main(void){
	int x, hap;
	hi();
	printf("숫자를 입력하쇼:");
	scanf("%d",&x);
	hap=input_num(x);
	hi();
return 0;
}
 
