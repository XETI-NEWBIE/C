#include<stdio.h>
#include<windows.h>
main(){
	int i,j;
	for(j=1;j<6;i++){
		for(j=1;j<=i;j++){
			printf("*"); 
		}
		Sleep(200);
		printf("\n");
	}
} 
