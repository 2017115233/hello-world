#include "stdio.h"
#include "math.h"
#include "stdlib.h"


int monthday(int month,int year)
{
    switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            return 31;break;
            
            case 4:
            case 6:
            case 9:
            case 11:
            return 30;break; 
            
            case 2:
            if(isleapyear(year))    
            {
                return 29;//����29�� 
                break;
            }
            else
            {
                return 28;
                break;
            }
            
        } 
    
}


int isleapyear(int year)
{
    if((year%4==0)&&(year%100!=0)||(year%400==0))
        return 1;
    else 
        return 0;
}

int main(void)
{
    int year,month,days,weekday;
    int i,d;
    
    while(1)
    {
        printf("�������:\n");
        scanf("%d",&year);
        days = year-1+(year-1)/400+(year-1)/4-(year-1)/100;
		
		//����ĳ���һ�������ڼ� 
        for(month=1;month<=12;month++)
        {
            printf("\t\t----%d��--%d��----\n",year,month);
            printf("��\tһ\t��\t��\t��\t��\t��\t\n");//��ͷ
            i = 1;
			d = 1;
            weekday = (days + 1)%7;  //�����ڼ� 
            while(i<=weekday)   //���ǰ��Ŀո� 
            {
                printf("\t");
                i++;
            } 
            
            while(d<=monthday(month,year))     //������� 
            {
                weekday = (days + 1)%7;
                if(weekday==6)   //���һ���������������֮��Ҫ���� 
                    printf("%d\n",d);
                else             //����������������󲻻��� 
                     printf("%d\t",d);
                 if(d==monthday(month,year))
                     printf("\n");
                 d++;
                 days++;
            }
        }
    }

}
