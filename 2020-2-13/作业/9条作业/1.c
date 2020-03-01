#include <stdio.h>

int main(void){
	int x,y;
	
	while(1){
		printf("请输入一个0~99的数据:");
		scanf("%d",&x);
	
		if(x>=0&&x<60) y=1;
		else if(x>60&&x<70) y=2;
		else if(x>=70&&x<80) y=3;
		else if(x>=80&&x<90) y=4;
		else if(x>=90&&x<=99) y=5;
	
		switch(y){
			case 1:printf("你输入的值<60");break;
			case 2:printf("你输入的值在60~69之间");break;
			case 3:printf("你输入的值在70~79之间");break;
			case 4:printf("你输入的值在80~89之间");break;
			case 5:printf("你输入的值在90~99之间");break;
			default: printf("数据有误");break;
		}
		printf("\n"); 
	}
}
