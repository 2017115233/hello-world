#include <stdio.h>

int main(void){
	
	int i, j, k, sum = 1;
	
	for(i=1;i<=19;i++){
		for(j=1;j<=49;j++){
			k=50-i-j;
			if(  (i+j+k==50) && (5*i + 2*j + k==100)  ){
				printf("��%d�ַ�����5Ԫ%d�ţ�2Ԫ%d�ţ�1Ԫ%d��\n", sum,i,j,k);
				sum++;
			}
		}
	}

	return 0;
}
