#include <stdio.h>

int main(void){
	int a,b;
	printf("请输入两个整型数据：");
	scanf("%d %d",&a,&b);
	printf("你输入的两个数分别为 %d,%d\n",a,b);
	a=a+b;
	printf("你输入的两个数之和为 %d\n",a);
	return 0;
}
