#include <stdio.h>
#include <string.h>

int Find_Str(char *s1, char *s2);

int main(void)
{
	char str1[50] = {0};
	char str2[10] = {0};
	int n = 0;

	printf("�������һ���ַ�����");
	gets(str1);
	printf("������ڶ����ַ�����");
	gets(str2);

	n = Find_Str(str1, str2);
	if(n != 0)
	{
		printf("��һ�γ��ֵ�λ�ã�%d\r\n", n);
	}else
	{
		printf("û�ҵ�\r\n");
	}
	

	return 0;
}

/*
�������ܣ���s1����s2��һ�γ��ֵ�λ��
�����βΣ�s1�ַ������׵�ַ  s2�ַ������׵�ַ
����ֵ���ҵ���λ��
��ע��None
���ڣ�2020��2��24��
���ߣ�Fannnnnn
�汾��v0.0
*/
/*
s1:fgfjhgjhgkjhljh\0
s3:fgf\0
s2:fgf\0
*/
int Find_Str(char *s1, char *s2)
{
	int len = 0;//����s2�ַ�������
	int n = 0;//����λ��
	char s3[20] = {0};

	len = strlen(s2);//�õ��ַ���2�ĳ���
	
	while(*s1 != '\0')
	{
		n++;
		
		strcpy(s3, s1);
		*(s3+len) = '\0';//dsf\0
	
		if(strcmp(s3, s2) == 0)
		{
			return n;
		}

		s1++;
	}

	return 0;//��s1��û�ҵ�s2
}