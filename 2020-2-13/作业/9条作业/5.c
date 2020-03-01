#include <stdio.h>

int main(void){
	
	int i, j, k, sum = 1;
	
	for(i=1;i<=19;i++){
		for(j=1;j<=49;j++){
			k=50-i-j;
			if(  (i+j+k==50) && (5*i + 2*j + k==100)  ){
				printf("第%d种方案：5元%d张，2元%d张，1元%d张\n", sum,i,j,k);
				sum++;
			}
		}
	}

	return 0;
}
