# SHeader-C-String-Library

>GENELLESTIRILMIS KURALLAR
    
    1-TUM ISLEMLER 1 NUMARALIDAN 2 NUMARALI OLANA DOGRU GERCEKLESIR
    2-HER ZAMAN VERILEN 2 ARALIKTA DAHILDIR

>FONKSIYONLAR

    +s_len       => string uzunlugunu geri cevirir
    +sd_slen     => icinde birden fazla kelime olan stringin icindeki her kelimenin uzunlugunu array olarak geri cevirir
    +s_sflen     => s_slice ile doldurulmus stringlerin uzunlugunu bulur , belirli bir karaktere kadar olan uzunlugu cevirir
    +s_wc        => string icinde tek boslukla ayrilmis her kelimeyi sayar ve geri cevirir

    +s_cpy       => stringi statik olarak parametre verilen arrayi kopyalanacagi arrayin boyutlarina gore kontrol edip kopyalar 
    +sd_cpy      => verilen stringi dinamik olarak kopyalayip geri cevirir
    +sn_cpy      => stringi statik olarak parametreye verilen arraye girilen indexler arasinda kopyalar
    +sdn_cpy     => verilen stringi dinamik olarak kopyalarken verilen indexlere gore islem gorur ve geri cevirir

    +s_toInt     => sadece integer deger iceren stringin veri tipini integera cevirir
    -i_toStr     => integer bir degiskeni stringe cevirir

    +s_slice     => girilen araliktalarda stringin uzerinde statik kesme islem yapar  
    +sd_slice    => girilen araliklarda string uzerinde kesme islemi yapar ve yeni bir string olarak cevirir
                     sdn_cpy'e benzer fakat stopIndex olarak -1 verilerek sona kadar alma yapilabilir

    +s_concat    => statik olarak str1 ve str2 stringlerini 3.parametre olan concatStr'ye birlestirir
    +sd_concat   => dinamik olarak str1 ve str2 stringlerini birlestirir ve ayri bellek olarak doner

    -sd_format   => parametreye girilen stringde kacis dizisi islemlerini yapmamizi saglar

    +sd_long     => string icindeki en uzun kelimeyi geri cevirir
    +sd_short    => string icindeki en kisa kelimeyi geri cevirir

    +s_equal     => girilen 2 stringi 3.parametreye gore kiyaslar eger isSpaceInclude=1 ise min uzunluktaki stringe gore
                    islem yapar eger 0 ise 1.parametredeki stringin uzunluguna gore islem yapar

    -s_rev       => verilen stringi ters cevirir ve string uzerinde islem yapar
    -sd_rev      => verilen string uzerinde islem yapmaz ters cevrilmis stringi geri cevirir

    +sd_split    => verilen stringin her kelimesini ayri bir arraye cevirir ve 2D array olarak cevirir split eder
    +sd_freeSplit=> split edilmesi icin gonderilen array ile split edilmis arrayi parametre olarak alir ve 2D arrayi siler

>PARAMETRELER

    xxxxxxxxStatus      => sonu Status ile biten parametreler hiz icin kapatilabilir parametrelerdir true/false 0/1 degerleri alirlar
    startIndex          =>
    isSpaceInclude      =>
