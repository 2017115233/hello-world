#include <stdio.h>

int main(void)
{
	char str[50] = "a123x456 17960?302tab5876";
	int a[20] = {0};
	int i, j = 0;

	for(i = 0; str[i]!='\0'; i++)
	{
		if(str[i]>='0' && str[i]<='9')//�ҵ������ַ�
		{
			a[j] = a[j]*10 + str[i]-'0';//a[0]=123

			if(str[i+1] < '0' || str[i+1] > '9')//�ж���һ���ַ��Ƿ�Ϊ�����ַ�
			{
				j++;
			}
		}
	}

	printf("һ����%d������\r\n", j);

	for(i = 0; i < j; i++)
	{
		printf("a[%d] = %d\r\n", i, a[i]);
	}

	return 0;
}
