#include <stdio.h>

int year1=1990,month1=1,day1=1;
int year2=0,month2=0,day2=0;
int count=0;
int leapyear(int year);                //声明判断闰年函数
int validate();  //声明日期验证函数
int totaldays();   //声明计算天数函数

int main(void){
    
    
	
    validate();              //验证日期正确性
    count=totaldays();       //求出指定日期
    
    if(count%5>0&&count%5<4){
    	printf("正在打渔\n");
	}else{
    	printf("正在晒网\n");
	}



	return 0; 
}


int leapyear(int y)//判断闰年函数
{
    if((y%4==0&&y%100!=0)||(y%400==0))
       return 1;
    else
       return 0;
 }

int validate()//日期验证函数
{
    int flag = 0;
    while(!flag) {
    printf("请输入1990年1月1日之后的日期(年-月-日)：\n");
    scanf("%d-%d-%d",&year2,&month2,&day2);    //输入指定日期
    if(year2<1990){
		printf("请输入正确的年份\n"); 
		continue;
	}

    if(month2<1||month2>12){
		printf("请输入正确月份\n"); 
		continue;
	}

    if(month2==2){
    	if(leapyear(year2)){
            if(day2<0||day2>29){
				printf("请输入正确日数\n"); 
				continue;
			}
        }else{
        	if(day2<0||day2>28){
				printf("请输入正确日数\n"); 
				continue;
			}
        }
    }

    if(day2<0||day2>31){
		printf("请输入正确日数\n"); 
		continue;
	}
       flag = 1;
    }
 }

int totaldays()//计算天数
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

