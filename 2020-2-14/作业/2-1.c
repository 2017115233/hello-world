#include <stdio.h>

int menu(void);
int panduan(void);
void dayin1(void);
void dayin2(void);

int main(void){
	int choose;
	while(1){
		choose = menu();
		switch(choose){
			case 1:panduan();break;
			case 2:dayin1();break;
			case 3:dayin2();break;
			default:break;
		}
		printf("------------------------\n");
	}
	
	return 0;
}

int menu(void){
	int choose;
	printf("��ѡ���ܣ�\n");
	printf("1--�ж�n�Ƿ�Ϊ������\n");
	printf("2--��ӡǰn��������\n");
	printf("3--��ӡnǰ�������������\n");
	scanf("%d",&choose);
	return choose;
}

int panduan(void){
	int n=0;
	int i;
	printf("������nֵ:");
	scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%i==0){
            printf("NO��\n");
			return 0; 
        }
    }
    if(n>1){
    	printf("Yes��\n");
	}else{
		printf("NO��\n");
	}
    
    
    return 1;
}


void dayin1(void){
	int n,i,j,k=0;
	int flag=0;
	printf("������nֵ:");
	scanf("%d",&n);
	
	
	for(j=0;k<n;j++){
		
		
		for(i=2;i<j;i++){
        	if(j%i==0){
				flag=1;	
        	}
    	}
    	if(flag==0&&j!=0&&j!=1){
    		printf("%d  ",j);
    		k++;
		}else {
			flag=0;
		}
        
	}


	printf("\n");
}

void dayin2(void){
	int n,i,j,flag;
	printf("������nֵ:");
	scanf("%d",&n);
	
	for(j=0;j<=n;j++){
		for(i=2;i<j;i++){
        	if(j%i==0){
				flag=1;	
        	}
    	}
    	if(flag==0&&j!=0&&j!=1){
    		printf("%d  ",j);
		}else {
			flag=0;
		}
	}
	printf("\n");
}

