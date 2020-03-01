#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
int str_len(char *str);
char *strCpy(char*strDest, const char *strSrc);

int main(void){
	char *str = "hello";	
	printf("len = %d\n", str_len(str));	

	
	char *p=NULL;
	char *str1, *str2="world";

	str1=(char *) malloc(sizeof(str_len(str2)+1));
	p=strCpy(str1,str2);
	printf("strDest=%s\n",p);

	free(str1);

	return 0;	
} 
	
int str_len(char *str)
{
	if(str == NULL){
		return 0;
	} 	
	int len = 0;	
	for(; *str++ != '\0';)	{
			len++;	
		}	
	return len;
}

char *strCpy(char*strDest, const char *strSrc)
{ 
	char *pp=strDest;
	assert(strDest!=NULL||strSrc!=NULL);
	pp=strDest;

	while(*strSrc!='\0'){
		*strDest=*strSrc;
		strDest++;
		strSrc++; 
	}

	return pp; 
}

