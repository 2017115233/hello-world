#include <stdio.h>

int main(void){
    int huns, tens, ones, i;
    printf("水仙花数分别为:\n");
    
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
