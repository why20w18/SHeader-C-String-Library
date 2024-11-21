#ifndef __S_HEADER__
#define __S_HEADER__

#define true 1
#define false 0

/*
+TUM ISLEMLER 1 NUMARALIDAN 2 NUMARALI OLANA DOGRU GERCEKLESIR
+HER ZAMAN VERILEN 2 ARALIKTA DAHILDIR

FONKSIYONLAR
s_len       => string uzunlugunu geri cevirir
s_lenControl=> string boyutlarini kiyaslayarak geriye uyari cevirir

s_cpy       => stringi statik olarak parametre verilen arraye kopyalar
sd_cpy      => verilen stringi dinamik olarak kopyalayip geri cevirir
sn_cpy      => stringi statik olarak parametreye verilen arraye girilen indexler arasinda kopyalar
sdn_cpy     => verilen stringi dinamik olarak kopyalarken verilen indexlere gore islem gorur ve geri cevirir

s_toInt     => sadece integer deger iceren stringin veri tipini integera cevirir
i_toStr     => integer bir degiskeni stringe cevirir

s_slice     => girilen araliklarda string uzerinde kesme islemleri yapmaya yarar

s_concat    => statik olarak str1 ve str2 stringlerini 3.parametre olan concatStr'ye birlestirir
sd_concat   => dinamik olarak str1 ve str2 stringlerini birlestirir ve ayri bellek olarak doner

sd_format   => parametreye girilen stringde kacis dizisi islemlerini yapmamizi saglar

PARAMETRELER
xxxxxxxxStatus      => sonu Status ile biten parametreler hiz icin kapatilabilir parametrelerdir true/false 0/1 degerleri alirlar
startIndex          =>
*/

int s_len(const char *str);
void s_lenControl(const char *str1 , const char *str2);

void s_cpy(const char *str1 , char *str2 , int s_lenControlStatus);
void sn_cpy(const char *str1 , char *str2 , int startIndex , int stopIndex);
char* sd_cpy(const char *str1);
char* sdn_cpy(const char *str1 , int startIndex , int stopIndex);

int s_toInt(const char *str);
char* i_toStr(int n);

char* s_slice(char *str);

void s_concat(char *str1 , char *str2 , char *concatStr);
char* sd_concat(char *str1 , char *str2);



#endif