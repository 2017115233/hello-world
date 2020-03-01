#include <stdio.h>

int main(void)
{
	char str[30] = "asd123jk456,hg789ck";
	int i;
	int sum = 0;

	for(i = 0; str[i]!='\0'; i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			sum = sum * 10 + str[i]-'0';//123

			if(str[i+1]<'0' || str[i+1]>'9')
			{
				printf("sum = %d\r\n", sum);
				break;	
			}
		}
	}


	return 0;
}