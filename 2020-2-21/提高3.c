#include <stdio.h>
#include <string.h>

char *Insert(char *s1, char *s2, int n);

int main(void)
{
	char str1[20] = "dsfdsgdsgsda";
	char str2[20] = "1234";
	int n = 0;
	char *p = NULL;

	printf("������Ҫ�����λ�ã�");
	scanf("%d", &n);

	p = Insert(str1, str2, n);

	puts(p);

	return 0;
}

/*
�������ܣ�����ת��
�����βΣ��ַ������׵�ַ  �ַ������׵�ַ   ����λ��
����ֵ�����Ӻõ��ַ����׵�ַ
��ע��i < j���н���
���ڣ�2020��2��24��
���ߣ�Fannnnnn
�汾��v0.0
*/
/*
s1  dsdjgfgjksdhfds\0
      p
s2  123\0
n = 3
*/
char *Insert(char *s1, char *s2, int n)//3
{
//	char a[20] = {0};
	char *p = s1;

	p = p + n-1;
	strcat(s2, p);//123fdjgfgjksdhfds\0
	*p = '\0';
	strcat(s1, s2);
/*	strcpy(a, p);//a:fdjgfgjksdhfds\0
	*p = '\0';

	strcat(s2, a);
	strcat(s1, s2);*/

	return s1;
}