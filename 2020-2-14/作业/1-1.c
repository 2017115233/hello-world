#include <stdio.h>

int main(void){
	int i;
	
	while(1){
		printf("������һ������:");
		scanf("%d",&i);
	
		if(i<0){
			i=-i;
		}
		printf("�����ľ���ֵ�ǣ�%d\n",i);
	}
	
	return 0;
}
