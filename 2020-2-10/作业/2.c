#include <stdio.h>

int main(void){
	int a,b,max;
	printf("�����������������ݣ�");
	scanf("%d %d",&a,&b);
	printf("��������������ֱ�Ϊ %d,%d\n",a,b);
	
	if(a>=b){
		max=a;
	}else {
		max=b;
	}

	printf("���ֵΪ  %d\n",max);	
	return 0;
}
