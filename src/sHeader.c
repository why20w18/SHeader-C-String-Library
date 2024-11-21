#include <stdio.h>
#include <stdlib.h>
#include "sHeader.h"

int s_len(const char *str){
    int len = 0;
    for(int i = 0 ; str[i] != '\0' ; i++)
        len++;

    return len;
}

void s_lenControl(const char *str1 , const char *str2){
    int len1 = s_len(str1);
    int len2 = s_len(str2);
    if(len1 > len2){
        perror("2.PARAMETREDEKI ARRAYIN BOYUTU KOPYALAMA ICIN YETERSIZDIR !");
        return;
    }
}

void s_cpy(const char *str1 , char *str2 , int s_lenControlStatus){
    if(s_lenControlStatus)
        s_lenControl(str1,str2);
    
    int len1 = s_len(str1);

    for(int i = 0 ; i < len1 ; i++)
        *(str2+i) = *(str1+i);
}

void sn_cpy(const char *str1 , char *str2 , int startIndex , int stopIndex){
    int len1 = s_len(str1);

    if(startIndex < 0 || stopIndex > len1-1){
        perror("INDEX ARALIGI YANLISTIR\n");
        return;
    }

    char *startIndexAddr = &str1[startIndex];
    char *stopIndexAddr = &str1[stopIndex];
    int i = 0;

    while(startIndexAddr <= stopIndexAddr){
        str2[i] = *startIndexAddr;
        i++;
        startIndexAddr++;
    }
}


char* sd_cpy(const char *str1){
    int len1 = s_len(str1);
    char *strResult = (char *) malloc(sizeof(char) *len1);
    
    if(strResult == NULL){
        perror("BELLEK TAHSISI HATASI\n");
        return NULL;
    }

    for(int i = 0 ; i < len1 ; i++){
        strResult[i] = str1[i];
    }
    return strResult;
}

char* sdn_cpy(const char *str1 , int startIndex , int stopIndex){
    int len1 = s_len(str1);
    char *strResult = (char *) malloc(sizeof(char) *len1);
    
    if(strResult == NULL){
        perror("BELLEK TAHSISI HATASI\n");
        return NULL;
    }
    
    char *startIndexAddr = &str1[startIndex];
    char *stopIndexAddr = &str1[stopIndex];

    int i = 0;
    while(startIndexAddr <= stopIndexAddr){
        strResult[i] = *startIndexAddr;
        i++;
        startIndexAddr++;
    }

    return strResult;
}




int s_toInt(const char *str){}
char* i_toStr(int n){}

char* s_slice(char *str){}

void s_concat(char *str1 , char *str2 , char *concatStr){}
char* sd_concat(char *str1 , char *str2){}