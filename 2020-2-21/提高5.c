#include <stdio.h>
#include <string.h>

int Find_Str(char *s1, char *s2);

int main(void)
{
	char str1[50] = {0};
	char str2[10] = {0};
	int n = 0;

	printf("请输入第一个字符串：");
	gets(str1);
	printf("请输入第二个字符串：");
	gets(str2);

	n = Find_Str(str1, str2);
	if(n != 0)
	{
		printf("第一次出现的位置：%d\r\n", n);
	}else
	{
		printf("没找到\r\n");
	}
	

	return 0;
}

/*
函数功能：从s1中找s2第一次出现的位置
函数形参：s1字符串的首地址  s2字符串的首地址
返回值：找到的位置
备注：None
日期：2020年2月24日
作者：Fannnnnn
版本：v0.0
*/
/*
s1:fgfjhgjhgkjhljh\0
s3:fgf\0
s2:fgf\0
*/
int Find_Str(char *s1, char *s2)
{
	int len = 0;//保存s2字符串长度
	int n = 0;//保存位置
	char s3[20] = {0};

	len = strlen(s2);//得到字符串2的长度
	
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

	return 0;//在s1中没找到s2
}