#include <stdio.h>

int main(void){
	int i;
	printf("100-500 �����ܱ�3�����Ҹ�λ����Ϊ 7 �������ֱ�Ϊ:\n");
	for(i=100;i<=500;i++){
		if( (i%3)==0 && ((i%10)%10)==7 ){
			printf(" %d \t",i);
		}
	}
	return 0;
} 
