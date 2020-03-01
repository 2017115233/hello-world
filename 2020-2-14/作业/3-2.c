#include <stdio.h>

int menu(char s[]);
void zsj(void);
void dsj(void);
int bidui(char x[],char y[]);
int str_len(char st[]);

int main(void){
	char str[5];
	char a[4]="abcd";
	char b[4]="1234";
	char c[3]="end";
	while(1){
		menu(str);
		if(bidui(str,a)){
			zsj();
			goto end;
		}
		if(bidui(str,b)){
			dsj();
			goto end;
		}
		if(bidui(str,c)){
			exit(0);
		}
		printf("error\n");
		end:
		printf("------------------------\n");
	}
	
	return 0;
}


int menu(char s[]){
	printf("abcd--打印正等边三角*\n");
	printf("1234--打印倒等边三角*\n");
	printf("end--结束！\n");
	printf("请输入指令:");
	scanf("%s",s);
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

int bidui(char x[],char y[]){
	int i=0,j;
	i = str_len(y);
	for(j=0;j<i;j++){
		if(x[j]!=y[j]){
			return 0;
		}
	}
	return 1;
}

int str_len(char st[])
{
	if(st[0] == NULL){
		return 0;
	}
	int len = 0;
	int i;
	for(i=0; st[i] != '\0';i++){
		len++;
	}
	return len;
}


