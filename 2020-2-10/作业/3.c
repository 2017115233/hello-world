#include <stdio.h>

int main(void){
	int a,b,c,max;
	printf("请输入三个整型数据：");
	scanf("%d %d %d",&a,&b,&c);
	printf("你输入的三个数分别为 %d,%d,%d\n",a,b,c);
	
	if(a==b&&b==c){
		max=a;
	}else{	
		if(a>b){
			max=a;
			if(a>c){
				max=a;
			}else{
				max=c;
			}
		}else{
			max=b;
			if(b>c){
				max=b;
			}else{
				max=c;
			}
		}
	}
	printf("最大值为 %d\n",max);

	return 0;
}

