#include <stdio.h>

void Sz_Zz(int (*p)[3], int h, int l);

int main(void)
{
	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};//a:二维数组首元素地址  int (*)[3]
	int i, j;

	printf("转置前：\r\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\r\n");
	}

	Sz_Zz(a, 3, 3);//转置

	printf("转置后：\r\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\r\n");
	}
	return 0;
}

/*
函数功能：数组转置
函数形参：数组的首元素地址   行数   列数
返回值：None
备注：i < j进行交换
日期：2020年2月24日
作者：Fannnnnn
版本：v0.0
*/
void Sz_Zz(int (*p)[3], int h, int l)
{
	int i, j;
	int temp = 0;

	for(i = 0; i < h; i++)//控制行数
	{
		for(j = 0; j < l; j++)//控制列数
		{
			if(i < j)
			{
			//	temp = p[i][j];
			//	p[i][j] = p[j][i];
			//	p[j][i] = temp;
				temp = *(*(p+i)+j);
				*(*(p+i)+j) = *(*(p+j)+i);
				*(*(p+j)+i) = temp;
			}
		}
	}
}

