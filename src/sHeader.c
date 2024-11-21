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


int s_powxy(int x , int y){
    int result = 1 , i = 0;
    while(i++ < y){
        result *= x;
    }

    return result;
}

void s_zerosArray(int *arr , int size){
    for(int i = 0 ; i < size ; i++)
        arr[i] = 0;
}


int s_toInt(const char *str){
    int len1 = s_len(str);
    int digitArr[len1];
    s_zerosArray(digitArr,len1);

    int i = 0;
    while(*str){    
        digitArr[i++] = *str - '0';
        str++;
    }

    int number = 0;
    for(int i = 0 ; i < len1 ; i++){
        number += digitArr[i] * s_powxy(10,len1-i-1);
    }

    return number;
}


char* i_toStr(int n){

}

char* s_slice(char *str){

}

void s_concat(char *str1 , char *str2 , char *concatStr){
    int len1 = s_len(str1);
    int len2 = s_len(str2);

    for(int i = 0 ; i < len1 ; i++){
        concatStr[i] = str1[i]; 
    }

    for(int j = 0 ; j < len2 ; j++){
        concatStr[len1+j] = str2[j];
    }
}

char* sd_concat(char *str1 , char *str2){
    int len1 = s_len(str1);
    int len2 = s_len(str2);

    char *resultStr = (char*) malloc(sizeof(char) * (len1+len2));
    if(resultStr == NULL){
        printf("SD_CONCAT: BELLEK TAHSIS HATASI\n");
        return NULL;
    }

    for(int i = 0 ; i < len1 ; i++)
        resultStr[i] = str1[i];

    for(int j = 0 ; j < len2 ; j++)
        resultStr[len1+j] = str2[j];

    return resultStr;
}