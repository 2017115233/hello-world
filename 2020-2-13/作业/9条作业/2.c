#include <stdio.h>

int main(void){
	int sum=0;
	int x,y;
	printf("1-3+5-7+9-...+97-99+101的计算结果:");
	for(x=1,y=3;y<=99;){
		sum=sum+x-y;
		x+=4;
		y+=4;
	}
	sum+=101;
	printf("%d",sum);
}

