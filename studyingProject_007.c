//
//  main.c
//  project_01
//
//  Created by Gevher Büşra Yetişen on 20.02.2023.
//

#include <stdio.h>

int main(void) {
    int x;
    struct ogrenci{
        char isim[15];
        int yas;
        float ortalama;
        char cinsiyet;
    };
    printf("Sinif mevcudunu giriniz:\n");
    scanf("%d",&x);
    struct ogrenci sinif1[x];
    
    return 0;
}
