//
//  main.c
//  final_sorusu_benzeri_001
//
//  Created by Gevher Büşra Yetişen on 1.02.2023.
//

#include <stdio.h>
#include <string.h>

//0123456701234567012345670123456701234567012345670123456701234567
int main(void) {
    
    char metin[65];
    char metinenc[65];
    int q=0;
    // Sonda null karakter olduğu için 65
    char m1[8][9];
    char m2[8][9];
    // m[i][j] şeklindeki ifadelerde i satır sayısı j sütun sayısını ifade eder. Her satır bir string parçası olduğundan her satır sonunda null karakter olur. Bu nedenle 64 karakterlik bir dizgi için 9 sütün gerekir.
    //not: tek matris tek string ile de yapılabilir.
    printf("Bir metin giriniz:\n");
    fgets(metin, 65 , stdin);
    for (int i=0,k=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            m1[i][j]=metin[k++];
            //k++ çünkü metinin ksındaki değeri m nin i. ve j. yerine yazdıktan sonra kyı bir artır.
        }
        
        //not1:
        //fgets(string ismi,karakter sayısı+null,stdin(standart input))
        //for kısmında matriste dolaşmak amaçlı tanımlanan i ve j ile beraber ilk for da tanımlanan k değişkeni tek tek artarak düz haldeki stringi kare matrise aktarır. Kendisine veri aktarılacak matris önce yazılır .
        
    }
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++){
            printf("%c",m1[i][j]);
        }
        printf("\n");
    }
    
    //not2:
    //burada matris halindeki dizgi tek tek yazdırılır.
    
     //dizinin ilk yarısı
    printf("Basla\n");
    for (int k=0; k<8; k++) {
        for (int i=0 , j=k; i<=k; i++,j--){
            printf("%c",m1[i][j]);
            metinenc[q++]=m1[i][j];
        }
        printf("\n");
    }
    
    //not3:
    //k kaç tur sayacağın 8 işlem ilk yarı için ; her turda i 0dan başlarken j 1 artarak gidecek yani k ile aynı devam ediyor
    //döngü nereye kadar devam edecek ; yazdıracağı şey her seferinde k ile aynı sayıda oluyo o yüzden kya eşit(küçük eşit) olana kadar i artacak  j ye bağlı bir durma yok ama j her seferinde azalacak ve ben bunu full başka bir düz string e genelde tanımlı artan bir değişkenle eşitleyeceğim
    
    //dizinin ikinci yarısı
    for (int k=1; k<8; k++) {
        for (int i=k , j=7; i<8; i++,j--){
            printf("%c",m1[i][j]);
            metinenc[q++]=m1[i][j];
        }
        printf("\n");
    }
    puts(metinenc);
    printf("Bitir\n");
    
    //not4:
    //k=1den çünkü ilk satırı full okuduk zaten. i değişkeni yani satır her turda sonraki satıra geçiyer yani k ya benziyor. j ise ikinci yarıda en sondan başlar yani j=7 ile başlar ve gittikçe azalır çünkü sayılan sefer sayısı azalır. i 7.satıra geldiğinde işlem biteceğinden i<8 olmalı ve i gitgide satır artıyo thats it so  i++
    //bunun sonunda genel değişken olan q yu ilk kısımdaki şekilde yazarak devamına ikinci yarı yazılır.
    //tüm her şey bittikten sonra puts(string ismi) şeklinde şifrelenmiş metin yazdırılır .
    
    
    //çözümleme
    
    //not5:
    //çözümlerken yine aynı düzende çaprazlama yapılır . aynı kodu kopyalayabilirsin!!!!
    //dizide q nun 65 te devam etmemesi için sıfırlamalıyız
    
    printf("Çözümleme:\n");
    q=0;
    
    for (int k=0; k<8; k++) {
        for (int i=0 , j=k; i<=k; i++,j--){
            m2[i][j]=metinenc[q++];
            printf("%c",m2[i][j]);
        }
        printf("\n");
    }
    
    for (int k=1; k<8; k++) {
        for (int i=k , j=7; i<8; i++,j--){
            printf("%c",m2[i][j]);
            m2[i][j]=metinenc[q++];
        }
        printf("\n");
    }

    //matris halinde yazdırma
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            printf("%c",m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
