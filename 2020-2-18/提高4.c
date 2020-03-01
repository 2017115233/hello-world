#include <stdio.h>

int main(void)
{
	int a[3][4] = {10,11,23,45,89,90,67,55,99,88,56,97};
	int sum[3] = {0};
	int i, j;

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\r\n");
	}

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			sum[i] = sum[i] + a[i][j];
		  //sum[0] = sum[0] + a[0][0];
	      //sum[0] = sum[0] + a[0][1];
		  //sum[0] = sum[0] + a[0][2];
	      //sum[0] = sum[0] + a[0][3];
		}
		sum[i] = sum[i]/4;
	}

	for(i = 0; i < 3; i++)
	{
		printf("sum[%d] = %d\r\n", i, sum[i]);
	}

	return 0;
}