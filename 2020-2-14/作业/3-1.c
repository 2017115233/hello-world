#include <stdio.h>

int menu(void);
void zsj(void);
void dsj(void);
void jzt(void);

int main(void){
	int choose;
	while(1){
		choose = menu();
		switch(choose){
			case 1:zsj();break;
			case 2:dsj();break;
			case 3:jzt();break;
			case 4:exit(0);
			default:printf("error\n"); 
		}
		printf("------------------------\n");
	}
	
	return 0;
}


int menu(void){
	int choose;
	printf("1--��ӡ������*\n");
	printf("2--��ӡ������*\n");
	printf("3--��ӡ��������\n");
	printf("4--������\n");
	printf("������ָ��:");
	scanf("%d",&choose);
	return choose;
}

void zsj(void){
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
}
void dsj(void){
	printf(" ******* \n");
	printf("  *****  \n");
	printf("   ***   \n");
	printf("    *    \n");
}
void jzt(void){
	int i,j,n;
	printf("����������n(n<=9):");
	scanf("%d",&n);

    for (i=1;i<=n;i++) {
        for (j=n-i;j>0;j--)
            printf(" ");
        for (j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
    }
}

