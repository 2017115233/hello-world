#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[3][20] = {0};
	char temp[20] = {0};
	int i, j;

	printf("请依次输入三个字符串：");
	for(i = 0; i < 3; i++)
	{
		scanf("%s", a[i]);
	}


	for(i = 0; i < 3; i++)
	{
		printf("%s\r\n", a[i]);
	}
	printf("==================\r\n");

	//冒泡排序
	for(i = 0; i < 2; i++)//控制比较趟数
	{
		for(j = 0; j < 2-i; j++)//控制每趟比较的次数
		{
			if(strcmp(a[j], a[j+1]) > 0)
			{
				//进行交换
				strcpy(temp, a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1], temp);
			}
		}
	}

	for(i = 0; i < 3; i++)
	{
		printf("%s\r\n", a[i]);
	}

	return 0;
}