#include <stdio.h>

int main(void){
	int a,b,max;
	printf("请输入两个整型数据：");
	scanf("%d %d",&a,&b);
	printf("你输入的两个数分别为 %d,%d\n",a,b);
	
	if(a>=b){
		max=a;
	}else {
		max=b;
	}

	printf("最大值为  %d\n",max);	
	return 0;
}
