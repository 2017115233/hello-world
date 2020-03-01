#include <stdio.h>

int year1=1990,month1=1,day1=1;
int year2=0,month2=0,day2=0;
int count=0;
int leapyear(int year);                //�����ж����꺯��
int validate();  //����������֤����
int totaldays();   //����������������

int main(void){
    
    
	
    validate();              //��֤������ȷ��
    count=totaldays();       //���ָ������
    
    if(count%5>0&&count%5<4){
    	printf("���ڴ���\n");
	}else{
    	printf("����ɹ��\n");
	}



	return 0; 
}


int leapyear(int y)//�ж����꺯��
{
    if((y%4==0&&y%100!=0)||(y%400==0))
       return 1;
    else
       return 0;
 }

int validate()//������֤����
{
    int flag = 0;
    while(!flag) {
    printf("������1990��1��1��֮�������(��-��-��)��\n");
    scanf("%d-%d-%d",&year2,&month2,&day2);    //����ָ������
    if(year2<1990){
		printf("��������ȷ�����\n"); 
		continue;
	}

    if(month2<1||month2>12){
		printf("��������ȷ�·�\n"); 
		continue;
	}

    if(month2==2){
    	if(leapyear(year2)){
            if(day2<0||day2>29){
				printf("��������ȷ����\n"); 
				continue;
			}
        }else{
        	if(day2<0||day2>28){
				printf("��������ȷ����\n"); 
				continue;
			}
        }
    }

    if(day2<0||day2>31){
		printf("��������ȷ����\n"); 
		continue;
	}
       flag = 1;
    }
 }

int totaldays()//��������
{	
	int i;
	int month[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    for(;year1<year2;year1++)
    {
       	if(leapyear(year1)){
           	count=count+366;
    	}
       else{
       		count=count+365;
	   }
    }
    
    if(leapyear(year2)){
    	month[2]=29;
	}

    for(i=0;i<month2;i++){
    	count=count+month[i];
	}

	count=count+day2;
	
	return count;
       
}

