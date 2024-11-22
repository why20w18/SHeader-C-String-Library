#ifndef __S_HEADER__
#define __S_HEADER__

#define S_INT_MAX 2147483647

typedef struct{
    char *data;
    
    //BOOL FONKSIYON DECL
    int (*isEmpty)(char*);
    
} s_str;

//TEMEL STRING FONKSIYONLARI
int s_len(const char *str);
int* s_slen(const char *str);

void s_cpy(const char *str1 , char *str2 , int maxSizeof);
void sn_cpy(const char *str1 , char *str2 , int startIndex , int stopIndex);
char* sd_cpy(const char *str1);
char* sdn_cpy(const char *str1 , int startIndex , int stopIndex);

int s_toInt(const char *str);
char* i_toStr(int n);

char* s_slice(char *str);

void s_concat(char *str1 , char *str2 , char *concatStr);
char* sd_concat(char *str1 , char *str2);

char* sd_long(char *str);
char* sd_short(char *str);

//BOOL FONKSIYONLARI
int isEmpty(char *msg);

//IMPLEMENTASYON ICIN GEREKLI FONKSIYONLAR
int s_powxy(int x , int y);
void s_zerosArray(int *arr , int size);

//EKLENECEK AMA ISLEVLERI BELIRLENMEYENLER
void sd_format();



#endif