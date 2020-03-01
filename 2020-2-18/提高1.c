#include <stdio.h>

void Sz_Px(int *p, int len);

int main(void)
{  //           0  1  2  3  4  5 6  7  8  9
	int a[10]={90,56,23,45,11,24,55,66,68,43};//a:int *
	int n = 0;
	int i, j;

	printf("请输入要删除的数据：");
	scanf("%d", &n);//55

	for(i = 0; i < 10; i++)//遍历
	{
		if(a[i] == n)//查找要删除的数据  i = 6
		{
			for(j = i; j < 9; j++)
			{
				a[j] = a[j+1];// a[8] = a[9]    
			}

			break;
		}
	}

	if(i < 10)//数据删除成功
	{
		Sz_Px(a, 9);

		for(i = 0; i < 9; i++)
		{
			printf("%d ", a[i]);
		}
	}else
	{
		Sz_Px(a, 10);
			for(i = 0; i < 10; i++)
		{
			printf("%d ", a[i]);
		}
	}
	

	return 0;
}


void Sz_Px(int *p, int len)//小到大
{
	//冒泡排序
	int i, j;
	int temp = 0;

	for(i = 0; i < len-1; i++)//趟数
	{
		for(j = 0; j < len-1-i; j++)//每趟比较的次数 
		{
			if(p[j] > p[j+1])
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}