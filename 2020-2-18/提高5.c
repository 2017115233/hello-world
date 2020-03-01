#include <stdio.h>

/*
a: hello wo
          i

b:  world\0
          j
*/
void My_Strcat(char *str1, char *str2);
int My_Strcmp(char *str1, char *str2);

int main(void)
{
	char a[20] = "hdllo";
	char b[20] = "hello";

	My_Strcat(a, b);

	puts(a);

	printf("%d\r\n", My_Strcmp(a, b));

	return 0;
}
//  hello\0
//       i
void My_Strcat(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	while(str1[i] != '\0')
	{
		i++;//5
	}//i下标直到了这个str1数组的\0字符

	while(str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}

	str1[i] = '\0';//形成一个字符串
}
/*
  str1: hello\0
  str2: hello\0
             i
*/
int My_Strcmp(char *str1, char *str2)
{
	int i = 0;
	while(str1[i] != '\0' || str2[i] != '\0')
	{
		if(str1[i] > str2[i])
		{
			return 1;
		}else if(str1[i] < str2[i])
		{
			return -1;
		}

		i++;
	}

	return 0;
}