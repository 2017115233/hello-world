#include <stdio.h>

int Pd_Hws(int n);

int main(void)
{
	int n = 0;

	printf("请输入一个数:");
	scanf("%d", &n);

	if( Pd_Hws(n) == 1 )
	{
		printf("是回文数\r\n");
	}else
	{
		printf("不是回文数\r\n");
	}

	return 0;
}


//函数功能：求一个整数的位数，并拆成数组
int Tj_SzLen(int n, int *p)//12321
{
	int len = 0;

	while(n > 0)//1
	{
		p[len] = n%10;//p[0]=1 p[1]=2  p[2]=3 p[3]=2 p[4]=1
		n = n / 10;//0
		len++;//5
	}

	return len;
}

/*
    0 1 2 3 4 
	1 2 3 2 1
        i
	    j
*/

//返回值：1回文数   0：不是回文数
int Pd_Hws(int n)//12321
{  
	int j, i;
	int a[10] = {0};//定义一个数组
	
	j = Tj_SzLen(n, a);//5

	j--;//回到最后一个元素的下标

	for(i = 0; i < j; i++,j--)
	{
		if(a[i] != a[j])
		{
			return 0;//不是回文数
		}
	}

	return 1;//回文数
} 