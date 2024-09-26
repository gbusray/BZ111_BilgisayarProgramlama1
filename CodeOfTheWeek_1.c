//
//  main.c
//  cow_01
//
//  Created by Gevher Büşra Yetişen on 14.02.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define π=3.14;
int x,y,alan,hacim;

int main(void) {
    int secim;
    printf("Hakkında hesaplama yapmak istediğiniz sekli seciniz:(Yalnizca sayi girdisi kabul edilir)\n");
    printf("Sekiller:\n 1-Kup\n 2-Kare\n 3-Daire\n 4-Silindir\n 5-Kure\n 6-Koni\n 7-Dikdörtgen Prizma\n 8-Kare Prizma\n ");
    scanf("%d",&secim);
    switch (secim) {
        case 1:
            f1();
            break;
        case 2:
            f2();
            break;
        case 3:
            f3();
            break;
        case 4:
            f4();
            break;
        case 5:
            f5();
            break;
        case 6:
            f6();
            break;
        case 7:
            f7();
            break;
        case 8:
            f8();
            break;
            
        default:
            printf("Hatali girdi!!!");
            break;
    }

    return 0;
}


void f1(void){
    printf("Seklin alanini mi hacimini mi hesaplamak istediginizi seciniz:(Yalnizca sayi girdisi kabul edilir)\n 1-Alan 2-Hacim\n");
    scanf("%d",&x);
    printf("Kupun bir kenar uzunlugunu giriniz:\n");
    int a;
    scanf("%d",&a);
    switch (y) {
        case 1:
            alan=6*a*a;
            printf("Kupun alani: %d",alan);
            break;
            
        default:
            hacim=a*a*a;
            printf("Kupun hacmi: %d",hacim);
            break;
    }
    
}

void f2(void){
    printf("Alani hesaplanacak karenin bir kenar uzunlugunu giriniz:\n");
    int a;
    scanf("%d",&a);
    alan=a*a;
    printf("Kupun alani: %d",alan);
}

void f3(void){
    printf("Alani hesaplanacak dairenin yarıcap uzunlugunu giriniz:\n");
    int r;
    scanf("%d",&r);
    alan=π*r*r;
    printf("Dairenin alani: %d",alan);
}

void f4(void){
    
    printf("Seklin alanini mi hacimini mi hesaplamak istediginizi seciniz:(Yalnizca sayi girdisi kabul edilir)\n 1-Alan 2-Hacim\n");
    scanf("%d",&x);
    printf("Silindirin yuksekligini ve yaricapini sirasiyla giriniz:\n");
    int h,r;
    scanf("%d%d",&h,&r);
    switch (y) {
        case 1:
            alan=(2*π*r*r)+(2*π*r*h);
            printf("Silindirin alani: %d",alan);
            break;
            
        default:
            hacim=π*r*r*h;
            printf("Silindirin hacmi: %d",hacim);
            break;
    }
}
    
void f5(void){
    printf("Seklin alanini mi hacimini mi hesaplamak istediginizi seciniz:(Yalnizca sayi girdisi kabul edilir)\n 1-Alan 2-Hacim\n");
    scanf("%d",&x);
    printf("Kurenin bir kenar uzunlugunu giriniz:\n");
    int r;
    scanf("%d",&r);
    switch (y) {
        case 1:
            alan=4*π*r*r;
            printf("Kurenin alani: %d",alan);
            break;
        default:
            hacim=4*π*r*r*r/3;
            printf("Kurenin hacmi: %d",hacim);
            break;
    }
    
}

void f6(void){
    printf("Seklin alanini mi hacimini mi hesaplamak istediginizi seciniz:(Yalnizca sayi girdisi kabul edilir)\n 1-Alan 2-Hacim\n");
    scanf("%d",&x);
    printf("Koninin yuksekligini ve yaricapini sirasiyla giriniz:\n");
    int h,r,a;
    scanf("%d%d",&h,&r);
    a=sqrt((r*r)+(h*h));
    switch (y) {
        case 1:
            alan=(π*r*r)+(π*r*a);
            printf("Koninin alani: %d",alan);
            break;
        default:
            hacim=π*r*r*h/3;
            printf("Koninin hacmi: %d",hacim);
            break;
    }
}

void f7(void){
    printf("Seklin alanini mi hacimini mi hesaplamak istediginizi seciniz:(Yalnizca sayi girdisi kabul edilir)\n 1-Alan 2-Hacim\n");
    scanf("%d",&x);
    printf("Dikdörtgenler Prizmasinin farkli kenar uzunluklarini sirasiyla giriniz:\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    switch (y) {
        case 1:
            alan=(2*a*b)+(2*a*c)+(2*b*c);
            printf("Dikdörtgenler Prizmasinin alani: %d",alan);
            break;
            
        default:
            hacim=a*b*c;
            printf("Dikdörtgenler Prizmasinin hacmi: %d",hacim);
            break;
    }
}

void f8(void){
    printf("Seklin alanini mi hacimini mi hesaplamak istediginizi seciniz:(Yalnizca sayi girdisi kabul edilir)\n 1-Alan 2-Hacim\n");
    scanf("%d",&x);
    printf("Kare Prizmanin farkli kenar uzunluklarini sirasiyla giriniz(once taban uzunlugu olmak uzere):\n");
    int a,b;
    scanf("%d%d",&a,&b);
    switch (y) {
        case 1:
            alan=(4*a*b)+(2*a*a);
            printf("Kare Prizmanin alani: %d",alan);
            break;
            
        default:
            hacim=a*a*b;
            printf("Kare Prizmanin hacmi: %d",hacim);
            break;
    }
    
}
