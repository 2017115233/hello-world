#include <stdio.h>

int main(void){
	int year;
	printf("���������:");
	scanf("%d",&year);
	if( 0 == (year%400)  ||  ( ( 0 == (year%4) ) && ( 0 != (year%100) ) ) ){
		printf("���������������꣡");
	}else {
		printf("���������ݲ������꣡");
	}
	return 0;
}


