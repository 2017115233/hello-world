#include <stdio.h>

int main(void){
	int a,i=0;
	printf("请输入一个整数:");
	scanf("%d",&a);
	
	if(a==0){
		i=1;
	}
	while(a>0){
		a=a/10;
		i++;
	}
	printf("你输入的是个 %d 位数。",i);
}
