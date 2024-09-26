//
//  main.c
//  cow_004
//
//  Created by Gevher Büşra Yetişen on 15.12.2022.
//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void rengim(int renk) //renk fonksiyonum
{
HANDLE hStdout;
hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hStdout, renk);
}
void gotoxy(short x, short y) // console ekranında dolaşmak için oluşturduğumuz koordinat fonksiyonu
{
HANDLE hConsoleOutput;
COORD Cursor_Pos={x-1,y-1};
hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,Cursor_Pos);
}
void baslangic() //oyunun başlangıcında ekranda geçecek minik bir animasyon
{
int i,j;
gotoxy(25,20);printf(" KIM 500 BIN ISTER ");
gotoxy(20,14);printf("       OYUN YUKLENIYOR");
for(j=15;j<=50;j++)
{
gotoxy(j,16);printf("%c",196);
gotoxy(j,18);printf("%c",196);
}
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,17);printf("%c",177);
Sleep(100);
rengim(7);
}
}
 
int main()
{
 
 
    char cvp1,cvp2,cvp3,cvp4,cvp5,cvp6,cvp7,cvp8,cvp9,cvp10,cvp11,cvp12,cvp13,cvp14,cvp15; int toplam=0,i,j;
     
    baslangic();
    system("CLS");
     
     
    rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n\n",toplam);
    rengim(7);printf("               1) Dunyanini en kalabalik ulkesi hangisidr ?\n\n");
    rengim(8);printf("               a)Japonya      b)Cin     c)Somali     d)Hindistan\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp1);
     
 
 
    if(cvp1=='b')
    {
        printf("\a");
        toplam=toplam+100;
     
    }
    else
    {
        goto sonagit;
    }
     
 
 
    system("CLS");
    rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
     
 
    system("CLS");
    getchar();
    rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
    rengim(7);printf("               2) Pusulada N harfi hangi yonu temsil eder ?\n\n");
    rengim(8);printf("               a)Kuzey      b)Bati     c)Dogu     d)Guney\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp2);
        if(cvp2=='a')
        {
            printf("\a");
                toplam=toplam+100;
                 
        }
        else
    {
        goto sonagit;
    }
      system("CLS");
          
    rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
    system("CLS");
        getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("        3) Dunya uzerinde elektrik enerjisini en iyi ileten metal hangisidir ?\n\n");
    rengim(8);printf("        a)Bakir      b)Cinko     c)Demir    d)Altin\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp3);
        if(cvp3=='d')
        {
            printf("\a");
            toplam=toplam+100;
             
        }
        else
        {
        goto sonagit;
        }
      system("CLS");
       
    rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
      system("CLS");
       
        getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("           4) Nerenin Sarimsagi meshurdur ?\n\n");
    rengim(8);printf("           a)Karatay      b)Bornova     c)Taskopru   d)Bolvadin\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp4);
        if(cvp4=='c')
        {
            printf("\a");
            toplam=toplam+200;
             
        }
        else
        {
        goto sonagit;
        }
      system("CLS");
     
    rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
               
      system("CLS");
       
      getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("           5) Galatasaray Uefa kupasini hangi yil almistir ?\n\n");
    rengim(8);printf("           a)1999      b)2000     c)2001  d)2002\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp5);
        if(cvp5=='b')
        {
            printf("\a");
            toplam=toplam+500;
             
        }
        else
        {
        goto sonagit;
        }
      system("CLS");
       
      rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
             system("CLS");
           
              getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("           6) Ataturk'un en sevdigi atinin ve kopeginin adi nedir ?\n\n");
    rengim(8);printf("           a)Anadolu-Sadik      b)Devrim-Cakir     c)Sakarya-Foks  d)Yigit-Kont\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp6);
        if(cvp6=='c')
        {
            printf("\a");
            toplam=toplam+1000;
             
        }
        else
        {
        goto sonagit;
        }
      system("CLS");
       
       
        rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
       
          system("CLS");
          getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("           7) Avrupa Birligi'nin Baskenti neresidir ?\n\n");
    rengim(8);printf("           a)Bruksel     b)Luksemburg     c)Hamburg   d)Koln\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp7);
        if(cvp7=='a')
        {
            printf("\a");
            toplam=toplam+2000;
             
        }
        else
        {
        goto sonagit;
        }
      system("CLS");
       
       
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
            system("CLS");
       
       
       
          getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("           8) Gayda nedir ?\n\n");
    rengim(8);printf("           a)Meyve Bicagi     b)Araba Parcasi     c)Kiyafet   d)Muzik Aleti\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp8);
        if(cvp8=='d')
        {
            printf("\a");
            toplam=toplam+4000;
             
        }
        else
        {
        goto sonagit;
        }
         
system("CLS");
     
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
            system("CLS");
       
       
          getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("           9) Hangi hastalik adini onu bulan kisinin soyadindan alinmistir ?\n\n");
    rengim(8);printf("           a)Tifo     b)Parkinson    c)Botulizm   d)Dizanteri\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp9);
        if(cvp9=='b')
        {
            printf("\a");
            toplam=toplam+8000;
             
        }
        else
        {
        goto sonagit;
        }
         
system("CLS");
           
     
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
system("CLS");
 
 
          getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("       10) Elektrikli sandalyeyi kesfeden Alfred Southwick’in meslegi neydi ?\n\n");
    rengim(8);printf("           a)Disci     b)Mimar    c)Ogretmen   d)Ressam\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp10);
        if(cvp10=='a')
        {
            printf("\a");
            toplam=toplam+16000;
             
        }
        else
        {
        goto sonagit;
        }
 
 
system("CLS");
           
     
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
 
system("CLS");
    getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("11) Bir sirkette 1 yil calismis olan bir isçinin yillik ucretli izni kac günden az olamaz ?\n\n");
    rengim(8);printf("           a)9     b)11    c)13   d)14\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp11);
        if(cvp11=='d')
        {
            printf("\a");
            toplam=toplam+32000;
             
        }
        else
        {
        goto sonagit;
        }
 
 
system("CLS");
 
     
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
 
 
system("CLS");
 
 
          getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("12) Akil oyunlari filmine hayat hikayesiyle Oscar kazandiran Oyun Teorisi ile Nobel odulu alan matematikci kimdir?\n\n");
    rengim(8);printf("           a)William Ramsay     b)Peter Debye    c)Otto Wallach   d)John Nash\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp12);
        if(cvp12=='d')
        {
            printf("\a");
            toplam=toplam+61000;
             
        }
        else
        {
        goto sonagit;
        }
 
 
system("CLS");
           
     
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
system("CLS");
 
    getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("13) 1958'de Gerald Holtom'in yaptigi baris sembolu neyi protesto etmek icin tasarlanmistir ?\n\n");
    rengim(8);printf("           a)Vietnam Savasi     b)Soykirim    c)Nukleer silahlanma   d)Kore savasi\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp13);
        if(cvp13=='c')
        {
            printf("\a");
            toplam=toplam+125000;
             
        }
        else
        {
        goto sonagit;
        }
 
 
system("CLS");
           
     
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
system("CLS");
 
 
    getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("14) Eski Roma'da gladyator dovuslerinin yapildigi 'arena'nin kelime anlami nedir ?\n\n");
    rengim(8);printf("           a)Kavga     b)Kum    c)Kilic   d)Kan\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp14);
        if(cvp14=='b')
        {
            printf("\a");
            toplam=toplam+250000;
             
        }
        else
        {
        goto sonagit;
        }
 
 
system("CLS");
 
     
           rengim(14); printf("\n\n                TEBRIKLER DOGRU YANITI VERDINIZ \n");
    rengim(7); printf("\n\n                 Toplam Para Odulunuz : ");rengim(6);printf("%d TL \n",toplam);
      rengim(7);    printf("\n\n                 Sonraki sorunuz hazirlaniyor");
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
 
system("CLS");
 
 
    getchar();
      rengim(6);printf("\n\n                                                 Toplam Para Odulu : %d TL\n\n\n",toplam);
      rengim(7);printf("15)Herodut'un yazdığı,Mısır Firavununun Dilin Kökeni Deneyinde, Doğunca Çobana Verilerek Kapatılan, O dahil kimseyle konuşturulmayan çocuğun söylediği ilk kelime nedir ?\n\n");
    rengim(8);printf("           a)Ver     b)Anne    c)Ekmek   d)Su\n\n");
    rengim(6);printf("Cevap : "); scanf("%c",&cvp15);
        if(cvp15=='b')
        {
            printf("\a");
            toplam=toplam+500000;
             
        }
        else
        {
        goto sonagit;
        }
 
       
system("CLS");
 
     
      rengim(7); printf("\n\n                TEBRIKLER");
    rengim(14); printf(" 1 MILYON TL ");
      rengim(7);    printf("KAZANDINIZ...\n\n");
      printf("                     Program Sonlandiriliyor\n");
       
 
for(i=15;i<=50;i++)
{
rengim(10);
gotoxy(i,11);printf("%c",177);
Sleep(200);
}
 
printf("\n\nYarisma Sona Erdi...\n\n");
return 0;
 
 
 
       
  sonagit :
            system("CLS");
      printf("\n\n\n\n            Yanlis cevap. Program Sonlandiriliyor\n\n\n\n")  ;
      for(i=50;i<=52;i++)
{
rengim(8);
gotoxy(i,5);printf(".",10);
Sleep(1500);
}
    rengim(7);printf("\n\n                                    Toplam Para Odulunuz : "); rengim(6);printf("%d TL\n",toplam);
    rengim(7);printf("                                    Gule Gule Harcayin...")  ;
}
          
 
