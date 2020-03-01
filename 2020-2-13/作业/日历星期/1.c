#include <stdio.h>

int main(void){
	int y,m,d,c,s,w;
	
	while(1){
		printf("请输入日期(格式年月日:xxxx-xx-xx): ");
		scanf("%d-%d-%d",&y,&m,&d);
	
		if (m==1) c=d;
		else if (m==2) c=31+d;
		else if (m==3) c=31+28+d;
		else if (m==4) c=31+28+31+d;
		else if (m==5) c=31+28+31+30+d;
		else if (m==6) c=31+28+31+30+31+d;
		else if (m==7) c=31+28+31+30+31+30+d;
		else if (m==8) c=31+28+31+30+31+30+31+d;
		else if (m==9) c=31+28+31+30+31+30+31+31+d;
		else if (m==10) c=31+28+31+30+31+30+31+31+30+d;
		else if (m==11) c=31+28+31+30+31+30+31+31+30+31+d;
		else if (m==12) c=31+28+31+30+31+30+31+31+30+31+30+d;
	
		if (m>2){
			if (y%100==0) {
				if (y%400==0) {
					c=c+1;
				}
			}else if (y%4==0){
				c=c+1;
			} 
		}
	
		s=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400+c;
		w=s%7;
	
		switch (w){
			case 0: printf("星期日");break;
			case 1: printf("星期一");break;
			case 2: printf("星期二");break;
			case 3: printf("星期三");break;
			case 4: printf("星期四");break;
			case 5: printf("星期五");break;
			case 6: printf("星期六");break;	
		}
		printf("\n");
	
	}
} 
