#include <stdio.h>
#include <stdlib.h>
#include "sHeader.h"

int main(){
    char arr1[100] = "Hello World";
    
    char arr2[10] = "1337";
    char arr3[10] = "oki";
    char arr4[10] = "doki";

    char arr5[15] = "Merhaba!";
    char arr6[25];

    int lenArr4 = s_len(arr4);
    printf("%d\n",lenArr4); //4

    sn_cpy(arr5,arr6,2,6);
    printf("%s\n",arr6);//rhaba

    char *kopyaArr1 = sd_cpy(arr1);
    printf("%s\n",kopyaArr1);//Hello World

    char *kopyaArr1Index = sdn_cpy(arr1,1,4);
    printf("%s\n",kopyaArr1Index);//ello


    free(kopyaArr1);
    free(kopyaArr1Index);
    return 0x0;
}