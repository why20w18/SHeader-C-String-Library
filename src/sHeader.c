#include <stdio.h>
#include <stdlib.h>
#include "sHeader.h"

int s_len(const char *str){
    int len = 0;
    for(int i = 0 ; str[i] != '\0' ; i++)
        len++;

    return len;
}

int s_sflen(const char *str,char fillChar){
    int i = 0;
    while(str[i] != fillChar){
        i++;
    }
    return i;
}

int s_wc(const char *str){
    if(str == NULL) return -1;
    
    int len = s_len(str);
    int wc = 1;

    for(int i = 0 ; i < len ; i++){
        if(*(str+i) == ' ' || str[i] == '\0'){
            wc++;
        }
    }
    return wc;
}

int *sd_slen(const char *str){
    if(str == NULL) return NULL;

    //"abc def ghj"
    int len = s_len(str);
    int wc = s_wc(str);

    int currentLen = 0;

    int *lenArr = (int*) malloc(sizeof(int)*wc);

    int j = 0;
    for(int i = 0 ; i < len ; i++){
        if(str[i] != ' ')
            currentLen++;
        else{
            lenArr[j++] = currentLen;
            currentLen = 0;
        }
    }
    lenArr[j] = currentLen;

    return lenArr;
}

void s_cpy(const char *str1 , char *str2,int maxSizeof){
    if(str1 == NULL || str2 == NULL) return;

    int len1 = s_len(str1);
    int copyLen = (len1 < maxSizeof-1) ? len1 : (maxSizeof-1);

    for(int i = 0 ; i < copyLen ; i++)
        str2[i] = str1[i];

    str2[copyLen] = '\0'; 
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

    str2[i] = '\0';
}


char* sd_cpy(const char *str1){
    int len1 = s_len(str1);
    char *strResult = (char *) malloc(sizeof(char) *len1);
    
    if(strResult == NULL){
        perror("BELLEK TAHSISI HATASI\n");
        return NULL;
    }

    int i = 0;
    for(i = 0 ; i < len1 ; i++){
        strResult[i] = str1[i];
    }
    strResult[i] = '\0';

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

    strResult[i] = '\0';
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

void s_slice(char *str , int startIndex , int stopIndex , char fillBlankChar){
    int len = s_len(str);
    if(str == NULL || startIndex < -1 || stopIndex > len-1) return;

    char *tempStr = sd_slice(str,startIndex,stopIndex);
    
    for(int i = 0 ; i < len ; i++){
        str[i] = fillBlankChar;
    }
    
    if(stopIndex == -1)
    stopIndex = len-1;
    if(startIndex == -1)
    startIndex = 0;

    for(int i = 0 ; i < (stopIndex-startIndex+1) ; i++)
        str[i] = tempStr[i];
    
    free(tempStr);
}

char* sd_slice(char *str , int startIndex , int stopIndex){
    int len = s_len(str);

    if(str == NULL || startIndex < -1 || stopIndex > len-1) return NULL;

    if(stopIndex == -1)
        stopIndex = len-1;
    if(startIndex == -1)
        startIndex = 0;

    char *startIndexAddr = &str[startIndex];
    char *stopIndexAddr = &str[stopIndex];

    char *resultStr = (char*) malloc(sizeof(char) * (stopIndex-startIndex+2));
    int i = 0;
    
    while(startIndexAddr <= stopIndexAddr){
        resultStr[i++] = *startIndexAddr;
        startIndexAddr++;
    }

    resultStr[i] = '\0';

    return resultStr;
}

char* createString(int s_lens){
    char *str = (char*) malloc(sizeof(char)*s_lens);
    return str;
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

char* sd_long(char *str){
    if(str == NULL) return NULL;

    int maxLen = 0 , currentLen = 0;
    char *resultStr = NULL , *startWord = NULL;

    while(*str){
        if(*str != ' '){
            if(currentLen == 0){
                startWord = str;
            }
            currentLen++;
        }
        else{
            if(currentLen > maxLen){
                maxLen = currentLen;
                free(resultStr);
                resultStr = (char*) malloc(sizeof(char) * (currentLen+1));
                s_cpy(startWord,resultStr,currentLen+1);
            }
            currentLen = 0;
        }


        str++;
    }

     if(currentLen > maxLen){
        maxLen = currentLen;
        free(resultStr);
        resultStr = (char*) malloc(sizeof(char) * (currentLen+1));
        s_cpy(startWord,resultStr,currentLen+1);
    }

    return resultStr;
}

char *sd_short(char *str){
    int currentLen = 0 , minLen = S_INT_MAX;
    char *startAddr = NULL , *resultStr = NULL;

    while(*str){
        if(*str != ' '){
            if(currentLen == 0)
            startAddr = str;
        currentLen++;
        }
        else{
            if(currentLen > 0 && currentLen < minLen){
                minLen = currentLen;
                free(resultStr);
                int resultStrSizeof = currentLen+1;
                resultStr = (char*) malloc(sizeof(char) * resultStrSizeof);
                s_cpy(startAddr,resultStr,resultStrSizeof);
            }
            currentLen = 0;
        }
        str++;
    }
    //son kelime icin
    if(currentLen > 0 && currentLen < minLen){
        minLen = currentLen;
        free(resultStr);
        int resultStrSizeof = currentLen+1;
        resultStr = (char*) malloc(sizeof(char) * resultStrSizeof);
        s_cpy(startAddr,resultStr,resultStrSizeof);
    }

    return resultStr;
}

void printIntArray(int *arr , int size){
    for(int i = 0 ; i < size ; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int s_equal(const char *str1 , const char *str2,int isWantLastSpaceDelete){
    if(str1 == NULL || str2 == NULL) return -1;

    int len1 = s_len(str1);
    int len2 = s_len(str2);

    if(isWantLastSpaceDelete){
        int minLen = (len1 > len2) ? len2 : len1;
        
        for(int i = 0 ; i < minLen ; i++){
            if(str1[i] != str2[i])
                return 0;
        }

        return 1;
    }

    else if(isWantLastSpaceDelete == 0){
        for(int i = 0 ; i < len1 ; i++){
            if(str1[i] != str2[i])
                return 0;
        }
        return 1;
    }
}