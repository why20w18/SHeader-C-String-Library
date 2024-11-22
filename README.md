# SHeader-C-String-Library

>GENELLESTIRILMIS KURALLAR
    
    1-TUM ISLEMLER 1 NUMARALIDAN 2 NUMARALI OLANA DOGRU GERCEKLESIR
    2-HER ZAMAN VERILEN 2 ARALIKTA DAHILDIR

>FONKSIYONLAR

    +s_len       => string uzunlugunu geri cevirir
    -s_slen      => icinde birden fazla kelime olan stringin icindeki her kelimenin uzunlugunu array olarak geri cevirir

    +s_cpy       => stringi statik olarak parametre verilen arraye kopyalar
    +sd_cpy      => verilen stringi dinamik olarak kopyalayip geri cevirir
    +sn_cpy      => stringi statik olarak parametreye verilen arraye girilen indexler arasinda kopyalar
    +sdn_cpy     => verilen stringi dinamik olarak kopyalarken verilen indexlere gore islem gorur ve geri cevirir

    +s_toInt     => sadece integer deger iceren stringin veri tipini integera cevirir
    -i_toStr     => integer bir degiskeni stringe cevirir

    -s_slice     => girilen araliklarda string uzerinde kesme islemleri yapmaya yarar

    +s_concat    => statik olarak str1 ve str2 stringlerini 3.parametre olan concatStr'ye birlestirir
    +sd_concat   => dinamik olarak str1 ve str2 stringlerini birlestirir ve ayri bellek olarak doner

    -sd_format   => parametreye girilen stringde kacis dizisi islemlerini yapmamizi saglar

    -sd_long     => string icindeki en uzun kelimeyi geri cevirir
    -sd_short    => string icindeki en kisa kelimeyi geri cevirir

    -s_equal     => girilen 2 string birbirine esitse true/1 esit degilse false/0 cevirir 

>PARAMETRELER

    xxxxxxxxStatus      => sonu Status ile biten parametreler hiz icin kapatilabilir parametrelerdir true/false 0/1 degerleri alirlar
    startIndex          =>
