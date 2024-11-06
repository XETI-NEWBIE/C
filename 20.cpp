#include<stdio.h>
void hi(void); 
void input_num(int n);

void input_num(int n){
	printf("입력된 숫자는 %d 유.\n",n);
	printf("입력된 숫자를 두 번 합하면 %d입니다\n",n+n);
}

int main(void){
	int x;
	hi();
	printf("숫자를 입력하쇼 :");
	scanf("%d",&x);
	input_num(x);
	hi();
	input_num(10);
return 0;
}

void hi(void){
	printf("안녕하세요. 욜로인생입니다.\n");
}
