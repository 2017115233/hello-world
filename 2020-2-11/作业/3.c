#include <stdio.h>

int main(void){
	int a,i=0;
	printf("������һ������:");
	scanf("%d",&a);
	
	if(a==0){
		i=1;
	}
	while(a>0){
		a=a/10;
		i++;
	}
	printf("��������Ǹ� %d λ����",i);
}
