#include <stdio.h>

int main(void){
	int i;
	printf("100-500 以内能被3整除且个位数字为 7 的整数分别为:\n");
	for(i=100;i<=500;i++){
		if( (i%3)==0 && ((i%10)%10)==7 ){
			printf(" %d \t",i);
		}
	}
	return 0;
} 
