#include <stdio.h>

int main(void)
{
	char str[50] = "a123x456 17960?302tab5876";
	int a[20] = {0};
	int i, j = 0;

	for(i = 0; str[i]!='\0'; i++)
	{
		if(str[i]>='0' && str[i]<='9')//找到数字字符
		{
			a[j] = a[j]*10 + str[i]-'0';//a[0]=123

			if(str[i+1] < '0' || str[i+1] > '9')//判断下一个字符是否为数字字符
			{
				j++;
			}
		}
	}

	printf("一共有%d个整数\r\n", j);

	for(i = 0; i < j; i++)
	{
		printf("a[%d] = %d\r\n", i, a[i]);
	}

	return 0;
}
