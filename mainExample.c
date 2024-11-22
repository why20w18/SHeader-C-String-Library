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

    printf("KELIME SAYISI : %d\n",s_wc(arr1)); //3

    int *herKelimeninLeni = sd_slen(arr1);
    printIntArray(herKelimeninLeni,s_wc(arr1)); //5,5,15

    char arr9[15] = "alican";
    char arr10[10] = "alican";
    char arr11[10] = "alican    ";

    //int s_equal(const char *str1 , const char *str2,int isWantLastSpaceDelete);
    printf("%d\n",s_equal(arr9,arr10,0)); //"alican" == "alican"        =>default str1 len  TRUE
    printf("%d\n",s_equal(arr9,arr11,0)); //"alican" == "alican     "   =>default str1 len  TRUE
    printf("%d\n",s_equal(arr9,arr11,1)); //"alican" == "alican"        =>default minLen    TRUE
    printf("%d\n",s_equal(arr11,arr9,0)); //"alican     " == "alican"   =>default str1 len  FALSE
    printf("%d\n",s_equal(arr11,arr9,1)); //"alican     " == "alican"   =>default minLen    TRUE

    char *canKelimesi = sd_slice(arr9,3,-1);   
    printf("%s\n",canKelimesi); //can

    printf("arr9:::: %s\nlen::: %d\n",arr9,s_len(arr9));
    char boslukDoldurmaKarakteri = '-';
    s_slice(arr9,3,-1,boslukDoldurmaKarakteri);
    printf("arr9:::: %s\nlen ::: %d\n",arr9,s_sflen(arr9,boslukDoldurmaKarakteri));
    
    printf("%s\n",arr1);
    char **arr1_split = sd_split(arr1);

    for(int i = 0 ; i < 3 ; i++){
        printf("%s\n",arr1_split[i]);
    }

/*
    printf("%s\n",arr1_split[0]);
    printf("%s\n",arr1_split[1]);
    printf("%s\n",arr1_split[2]);
*/
    free(kopyaArr1);
    free(kopyaArr1Index);
    free(oki2Doki);
    free(longest);
    free(shortest);
    free(canKelimesi);
    sd_freeSplit(arr1,arr1_split);

    return 0x0;
}