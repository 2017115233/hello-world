#include <stdio.h>
/*
   0  1  2  3  4  5  6  7  8  9
   a  s  d  d  d  f  g  h  d  \0
         i
		    j
   d
*/

int main(void)
{
	char str[20] = {0};	
	char ch = 0;
	int i, j;

	printf("�������ַ�����Ҫɾ�����ַ���");
	scanf("%s %c", str, &ch);

	printf("���ǰ��");
	puts(str);

	for(i = 0; str[i]!='\0'; i++)
	{
		if(str[i] == ch)
		{
			for(j = i; str[j]!='\0'; j++)
			{
				str[j] = str[j+1];
			}
			i--;
		}
	}

	puts("ɾ����:");
	puts(str);

	return 0;
}