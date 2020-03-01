#include <stdio.h>
#include <string.h>

char *Insert(char *s1, char *s2, int n);

int main(void)
{
	char str1[20] = "dsfdsgdsgsda";
	char str2[20] = "1234";
	int n = 0;
	char *p = NULL;

	printf("请输入要插入的位置：");
	scanf("%d", &n);

	p = Insert(str1, str2, n);

	puts(p);

	return 0;
}

/*
函数功能：数组转置
函数形参：字符串的首地址  字符串的首地址   插入位置
返回值：连接好的字符串首地址
备注：i < j进行交换
日期：2020年2月24日
作者：Fannnnnn
版本：v0.0
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