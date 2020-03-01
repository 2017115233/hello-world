#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *insert(char s1[30],char s2[30],int n);


int main()
{
	char s1[30] = {0};
//	char s1[30];
	char s2[30];
	int i,n;
	printf("请输入字符串1：");
	gets(s1);
	printf("请输入字符串2：");
	gets(s2);
loop:	printf("请输入要插入的位置在第几个字符：");
	scanf("%d",&n) ;
	for(i = 0;s1[i];i++)
	{
	}
	if(n > i + 1)
	{
		printf("插入位置不在数组内，请重新输入\n");
		goto loop;
	}
	char *p = insert(s1,s2,n);
//	insert(s1,s2,n);
	printf("插入后字符串为：%s",p);
	return 0;
}
char *insert(char s1[30],char s2[30],int n)
{
	char *p1,*p2,*p3;
	int i,j;
	int len1,len2;
	char s3[30] = {0};
	p1 = s1;
	p2 = s2;	
	p3 = s3;
	if(n == len1 + 1) 
	{
		strcat(p1,p2);
		return p1;
		//printf("%s",p1);
	}
	else
	{
		for(i = 0;i < n-1;i++)
		{
			*(p3 + i) = *(p1 + i + n - 1);
		}	
		*(p1 + n - 1) = '\0' ;
		strcat(p1,p2);
		strcat(p1,p3);
	/*	for(i = 0;i < len1 + len2;i++)
		{
			*(p1 + i) = *(p3 + i + n - 1);
		}			
	/*	for(j = 0;j < len1 - n + 1;j++)
		{
			*(p3 + j) = *(p1 +  n + j - 1); 
		}	
		for(i = 0;i < len2;i++)
		{
			*(p1 + n - 1 + i) = *(p2 + i);
		}
		for(i = 0; i < len1 - n + 1; i++)
		{
			*(p1 +  len2 + n - 1 + i) = *(p3 + i);
		}*/
	/*	for(j = 0;j < len1 + len2;j++)
		{
			printf("%c\n",*(p1 + j));
		}*/
	
		printf("%s",p3);
		return p1;
	}
} 


