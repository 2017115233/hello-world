#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[3][20] = {0};
	char temp[20] = {0};
	int i, j;

	printf("���������������ַ�����");
	for(i = 0; i < 3; i++)
	{
		scanf("%s", a[i]);
	}


	for(i = 0; i < 3; i++)
	{
		printf("%s\r\n", a[i]);
	}
	printf("==================\r\n");

	//ð������
	for(i = 0; i < 2; i++)//���ƱȽ�����
	{
		for(j = 0; j < 2-i; j++)//����ÿ�˱ȽϵĴ���
		{
			if(strcmp(a[j], a[j+1]) > 0)
			{
				//���н���
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