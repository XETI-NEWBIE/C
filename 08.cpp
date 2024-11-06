#include<stdio.h>
int main(void){
char name[10];
int select;
printf("이름:");
scanf("%s",&name);
printf("이름이 [%s]이군요. \n맞으면 1, 틀리면 2",name);
scanf("%d",&select);
if(select==1)
printf("%s이(가)맞습니다.",name);
else
printf("%s이(가)아닙니다.",name);
 
}
