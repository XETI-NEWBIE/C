#include<stdio.h>
main()
{
	char mw;
	char name[10];
	int age;
	puts("성별(남:m,여:w)");
	scanf("%c",&mw);
	puts("이름:");
	scanf("%s",&name);
	puts("나이");
	scanf("%d",&age); 
	printf("당신의 이름:%s, 성별:%c, 나이:%d",name,mw,age);
}


