#include <stdio.h>

void Sz_Zz(int (*p)[3], int h, int l);

int main(void)
{
	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};//a:��ά������Ԫ�ص�ַ  int (*)[3]
	int i, j;

	printf("ת��ǰ��\r\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\r\n");
	}

	Sz_Zz(a, 3, 3);//ת��

	printf("ת�ú�\r\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\r\n");
	}
	return 0;
}

/*
�������ܣ�����ת��
�����βΣ��������Ԫ�ص�ַ   ����   ����
����ֵ��None
��ע��i < j���н���
���ڣ�2020��2��24��
���ߣ�Fannnnnn
�汾��v0.0
*/
void Sz_Zz(int (*p)[3], int h, int l)
{
	int i, j;
	int temp = 0;

	for(i = 0; i < h; i++)//��������
	{
		for(j = 0; j < l; j++)//��������
		{
			if(i < j)
			{
			//	temp = p[i][j];
			//	p[i][j] = p[j][i];
			//	p[j][i] = temp;
				temp = *(*(p+i)+j);
				*(*(p+i)+j) = *(*(p+j)+i);
				*(*(p+j)+i) = temp;
			}
		}
	}
}

