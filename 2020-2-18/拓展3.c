#include <stdio.h>

/*
	  dfdsv    sdfsdg sdfdgfd    sdfsdv   sdfd  \0
	                                          i
*/

int main(void)
{
	int num = 0;
	int flag = 0;
	char str[50] = {0};
	int i;

	printf("ÇëÊäÈë×Ö·û´®£º");
	gets(str);

	if(str[0] != ' ')
	{
		num++;
	}

	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			flag = 1;
		}else if(flag == 1)
		{
			flag = 0;
			num++;
		}
	}

	printf("%d\r\n", num);

	return 0;
}