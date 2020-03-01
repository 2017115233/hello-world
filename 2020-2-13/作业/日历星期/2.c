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
                return 29;//闰年29天 
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
        printf("输入年份:\n");
        scanf("%d",&year);
        days = year-1+(year-1)/400+(year-1)/4-(year-1)/100;
		
		//计算某年第一天是星期几 
        for(month=1;month<=12;month++)
        {
            printf("\t\t----%d年--%d月----\n",year,month);
            printf("日\t一\t二\t三\t四\t五\t六\t\n");//表头
            i = 1;
			d = 1;
            weekday = (days + 1)%7;  //求星期几 
            while(i<=weekday)   //输出前面的空格 
            {
                printf("\t");
                i++;
            } 
            
            while(d<=monthday(month,year))     //输出日期 
            {
                weekday = (days + 1)%7;
                if(weekday==6)   //最后一个是星期六，输出之后要换行 
                    printf("%d\n",d);
                else             //不是星期六的输出后不换行 
                     printf("%d\t",d);
                 if(d==monthday(month,year))
                     printf("\n");
                 d++;
                 days++;
            }
        }
    }

}
