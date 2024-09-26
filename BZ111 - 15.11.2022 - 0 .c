//
//  main.c
//  bz111_15.11.2022
//
//  Created by Gevher Büşra Yetişen on 15.11.2022.
//
//  main'in ici ozellikle hocaya yollarken void olmalı!
//
 //for döngüsü kullanarak 5 sayı iste ortalamasını hesplat

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,toplam=0,sayi,kac;
    printf("Kaç sayi gireceginizi yaziniz ->");
    scanf("%d" ,&kac);
    for(i=1; i<=kac;++i)  {
        printf("%d. sayiyi giriniz -> \n" ,i);
        scanf("%d" ,&sayi);
        toplam=toplam+sayi;}
    float ort=toplam/(float)kac;
    printf("%d tane sayinin;",kac);
    printf("toplami: %d \n" ,toplam);
    printf("ortalamasi: %f \n" ,ort);
    return 0;
}
