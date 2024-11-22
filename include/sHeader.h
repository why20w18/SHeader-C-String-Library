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
int s_sflen(const char *str , char fillChar);
int* sd_slen(const char *str);
int s_wc(const char *str);

void s_cpy(const char *str1 , char *str2 , int maxSizeof);
void sn_cpy(const char *str1 , char *str2 , int startIndex , int stopIndex);
char* sd_cpy(const char *str1);
char* sdn_cpy(const char *str1 , int startIndex , int stopIndex);

int s_toInt(const char *str);
char* i_toStr(int n);

int s_equal(const char *str1 , const char *str2 , int isWantLastSpaceDelete);

void s_slice(char *str , int startIndex , int stopIndex , char fillBlankChar);
char* sd_slice(char *str,int startIndex , int stopIndex);

void s_concat(char *str1 , char *str2 , char *concatStr);
char* sd_concat(char *str1 , char *str2);

char* sd_long(char *str);
char* sd_short(char *str);

char** sd_split(char *str);
void sd_freeSplit(char *send_sdArrayParam , char **sd_array);

//BOOL FONKSIYONLARI
int isEmpty(char *msg);

//IMPLEMENTASYON ICIN GEREKLI FONKSIYONLAR
int s_powxy(int x , int y);
void s_zerosArray(int *arr , int size);
void printIntArray(int *arr , int size);
char* createString(int s_len);

//EKLENECEK AMA ISLEVLERI BELIRLENMEYENLER
void sd_format();



#endif