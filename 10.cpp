#include<stdio.h>
main(){
	int menu;
	do{
	printf("\n");
	printf("메뉴를 선택하세요\n\n");
	printf("*****메뉴판*****\n\n");
	printf("1.짜장면\n");
	printf("2.짬뽕\n");
	printf("3.볶음밥\n");
	printf("4.탕수육\n");
	scanf("%d",&menu);
    }while(menu<1||menu>4);
	printf("메뉴[%d]를(을) 선택했습니다.\n\n",menu);
	switch(menu){
	    case 1:
	      	puts("짜장면을 선택, 8000원입니다");break; 
	    case 2:
	      	puts("짬뽕을 선택, 9000원입니다");break;
	    case 3:
	      	puts("볶음밥을 선택, 9000원입니다");break; 
	    case 4:
	      	puts("탕수육을 선택, 15000원입니다");break; 
        }
}
	
