#include <stdio.h>

int main(void){
	int x,y;
	
	while(1){
		printf("������һ��0~99������:");
		scanf("%d",&x);
	
		if(x>=0&&x<60) y=1;
		else if(x>60&&x<70) y=2;
		else if(x>=70&&x<80) y=3;
		else if(x>=80&&x<90) y=4;
		else if(x>=90&&x<=99) y=5;
	
		switch(y){
			case 1:printf("�������ֵ<60");break;
			case 2:printf("�������ֵ��60~69֮��");break;
			case 3:printf("�������ֵ��70~79֮��");break;
			case 4:printf("�������ֵ��80~89֮��");break;
			case 5:printf("�������ֵ��90~99֮��");break;
			default: printf("��������");break;
		}
		printf("\n"); 
	}
}
