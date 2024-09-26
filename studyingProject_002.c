//
//  main.c
//  final_sorusu_benzeri_001
//  work_no_02
//
//  Created by Gevher Büşra Yetişen on 1.02.2023.
//

#include <stdio.h>
#include <string.h>

//0123456701234567012345670123456701234567012345670123456701234567
int main(void) {
    
    char no1[65];
    char no2[65];
    int q=0;
    char m1[8][9];
    char m2[8][9];
    
    printf("Bir metin giriniz:\n");
    fgets(metin, 65 , stdin);
    for (int i=0,k=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            m1[i][j]=metin[k++];
            //k++ çünkü metinin ksındaki değeri m nin i. ve j. yerine yaz kyı bir artır.
        }
        
    }
    for (int i=0,k=0; i<8; i++) {
        for (int j=0; j<8; j++){
            printf("%c",m1[i][j]);
        }
        printf("\n");
    }
     //dizinin ilk yarısı
    printf("Basla\n");
    for (int k=0; k<8; k++) {
        for (int i=0 , j=k; i<=k; i++,j--){
            printf("%c",m1[i][j]);
            metinenc[q++]=m1[i][j];
        }
        printf("\n");
    }
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
    
    //çözümleme
    
    //çözümlerken yine aynı düzende çaprazlama yapılır . aynı kodu kopyalayabilirsin
   
    printf("Çözümleme:\n");
    q=0;
    //dizide q nun 65 te devam etmemesi için sıfırlamalıyız
    
    for (int k=0; k<8; k++) {
        for (int i=0 , j=k; i<=k; i++,j--){
            m2[i][j]=metinenc[q++];
            printf("%c",m2[i][j]);
        }
        printf("\n");
    }
    //dizinin ikinci yarısı
    for (int k=1; k<8; k++) {
        for (int i=k , j=7; i<8; i++,j--){
            printf("%c",m2[i][j]);
            m2[i][j]=metinenc[q++];
        }
        printf("\n");
    }
    printf("Bitir.\n");
    for (int i=0, k=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            printf("%c",m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
