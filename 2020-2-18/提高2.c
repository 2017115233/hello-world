#include <stdio.h>

int Pd_Hws(int n);

int main(void)
{
	int n = 0;

	printf("������һ����:");
	scanf("%d", &n);

	if( Pd_Hws(n) == 1 )
	{
		printf("�ǻ�����\r\n");
	}else
	{
		printf("���ǻ�����\r\n");
	}

	return 0;
}


//�������ܣ���һ��������λ�������������
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

//����ֵ��1������   0�����ǻ�����
int Pd_Hws(int n)//12321
{  
	int j, i;
	int a[10] = {0};//����һ������
	
	j = Tj_SzLen(n, a);//5

	j--;//�ص����һ��Ԫ�ص��±�

	for(i = 0; i < j; i++,j--)
	{
		if(a[i] != a[j])
		{
			return 0;//���ǻ�����
		}
	}

	return 1;//������
} 