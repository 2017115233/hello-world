#include <stdio.h>

int main(void){
	int year;
	printf("请输入年份:");
	scanf("%d",&year);
	if( 0 == (year%400)  ||  ( ( 0 == (year%4) ) && ( 0 != (year%100) ) ) ){
		printf("你输入的年份是闰年！");
	}else {
		printf("你输入的年份不是闰年！");
	}
	return 0;
}


