#include <stdio.h>

int main(void){
	int a,b,c,max;
	printf("�����������������ݣ�");
	scanf("%d %d %d",&a,&b,&c);
	printf("��������������ֱ�Ϊ %d,%d,%d\n",a,b,c);
	
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
	printf("���ֵΪ %d\n",max);

	return 0;
}

