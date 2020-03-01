#include <stdio.h>

int main(void)
{
	int a[50] = {0};
	int n = 0;//那个人
	int i;
	int td = 0;
	int bs = 0;

	printf("请输入n个人：");
	scanf("%d", &n);//10

	//编号
	for(i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	
	i = 0;
	while(td < n-1)
	{
		if(a[i] != 0)
		{
			bs++;
		}

		if(bs == 3)
		{
			a[i] = 0;
			td++;
			bs = 0;
		}

		i++;
		if(i == n)
		{
			i = 0;
		}
	}

	for(i = 0; i < n; i++)
	{
		if(a[i] != 0)
		{
			printf("%d\r\n", a[i]);
		}
	}

	return 0;
}	