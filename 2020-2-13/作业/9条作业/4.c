#include <stdio.h>

int main(void){
    int huns, tens, ones, i;
    printf("ˮ�ɻ����ֱ�Ϊ:\n");
    
    for( i=100; i<1000; i++ )
    {
        huns = i / 100;
        tens = (i-huns*100) / 10;
        ones = i % 10;
        if(i == huns*huns*huns + tens*tens*tens + ones*ones*ones)
            printf("%d  ", i);
    }
    printf("\t");
   
    return 0;
}
