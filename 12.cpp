#include<stdio.h>
main(){
	char x[5];
	int more;
	do{
	puts("해당하는 항목을 입력하시오");
	puts("a:입금, b:출금, c:송금, d:조회");
	scanf("%s",&x);
	switch(x){
		case 'a' :
		    puts("입금 선택");break;
		case 'b':
		    puts("출금 선택");break; 
		case 'c':
		    puts("송금 선택");break; 
		case 'd':
		    puts("조회 선택");break;    
		default:
			puts("없는 메뉴임 ㅅㄱ");break;	
		}
		puts("계속하려면 [1], 중지는 [2]");
		scanf("&d",&more);
 
}while(more==1);

}
