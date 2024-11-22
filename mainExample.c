#include <stdio.h>
#include <stdlib.h>
#include "sHeader.h"

int main(){
    char arr1[100] = "Hello World MERHABADUNYALAR";
    
    char arr2[10] = "1337";
    char arr3[10] = "oki ";
    char arr4[10] = "doki";

    char arr5[15] = "Merhaba!";
    char arr6[25];
    char arr7[10];

    int lenArr4 = s_len(arr4);
    printf("%d\n",lenArr4); //4

    sn_cpy(arr5,arr6,2,6);
    printf("%s\n",arr6);//rhaba

    char *kopyaArr1 = sd_cpy(arr1);
    printf("%s\n",kopyaArr1);//Hello World

    char *kopyaArr1Index = sdn_cpy(arr1,1,4);
    printf("%s\n",kopyaArr1Index);//ello

    //2^5
    printf("%d\n",s_powxy(2,5));

    printf("%d\n",s_toInt(arr2));//1337

    s_concat(arr3,arr4,arr7);
    printf("arr6::: %s\n",arr7);//oki doki

    char *oki2Doki = sd_concat(arr3,arr7);
    printf("%s\n",oki2Doki);//oki oki doki

    char *longest = sd_long(arr1);
    printf("%s\n",longest);

    char *shortest = sd_short(arr1);
    printf("%s\n",shortest);

    free(kopyaArr1);
    free(kopyaArr1Index);
    free(oki2Doki);
    free(longest);
    free(shortest);

    return 0x0;
}