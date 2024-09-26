//
//  main.c
//  bz111_29.11.2022_002
//
//  Created by Gevher Büşra Yetişen on 29.11.2022.
//

#include <stdio.h>
#include <stdlib.h>

void yerDegistir(int *ptr1,int *ptr2){
int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;}
int main(void) {
    int x,y;
    printf("x ve y degerlerini giriniz -> ");
    scanf("%d%d",&x,&y);
    printf("x=%d , y=%d \n",x,y);
    yerDegistir(&x, &y);
    printf("x=%d , y=%d \n",x,y);
    return 0;
}
//kağıtta program yaz çünkü sınav kağıtta
//programı kağıtta bitirip bilgisayarda check et
//kağıda program yaz!!!
//algoritma ve akış diyagramı vizede ve finalde çıkar
//pointerların sonuna kadar
