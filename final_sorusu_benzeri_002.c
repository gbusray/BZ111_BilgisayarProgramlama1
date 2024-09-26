//
//  main.c
//  final_sorusu_benzeri_003
//
//  Created by Gevher Büşra Yetişen on 29.01.2023.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    
    int i;
    float x,y,z,topla;
    double e;
    e = 2.718282;
    printf("0 ile 2 arasinda bir sayi giriniz:\n");
    scanf("%f",&x);
    if (x<2) {
        if(0<x){
            z=x-1;
            if (-1<z) {
                if (z<1){
                    for (i=1; i<=6; i++) {
                        y=pow(-1, i-1)*pow(i, -1)*pow(z, i);
                        topla=topla+y;
                    }
                    printf("%.3f sayisina uygulanan ln isleminin sonucu %.3fdir.",x,topla);
                }}
            else
                printf("Aralık haricinde bir sayi girdiniz tekrar deneyin.\n");
        } else
            printf("Aralık haricinde bir sayi girdiniz tekrar deneyin.\n");
        return 0;
    } }
