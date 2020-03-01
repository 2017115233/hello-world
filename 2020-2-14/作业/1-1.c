#include <stdio.h>

int main(void){
	int i;
	
	while(1){
		printf("请输入一个整数:");
		scanf("%d",&i);
	
		if(i<0){
			i=-i;
		}
		printf("该数的绝对值是：%d\n",i);
	}
	
	return 0;
}
