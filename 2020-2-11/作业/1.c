#include <stdio.h>

int main(void){
	char a;
	printf("请输入一个字符: ");
	scanf("%c",&a);
	if(a>=48&&a<=57){
		printf("你输入的是数字字符\n");
	}else if(a>=65&&a<=90){
		printf("你输入的是大写字母\n");
	}else if(a>=97&&a<=122){
		printf("你输入的是小写字母\n");
	}else {
		printf("你输入的是其他字符\n");
	}
	
	return 0;
}
