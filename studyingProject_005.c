//
//  main.c
//  work__003
//
//  Created by Gevher Büşra Yetişen on 2.02.2023.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    printf("Bir sayi giriniz:\n");
    scanf("%d",&x);
    asal_carpanlar(x);
    return 0;
}

void asal_carpanlar(int a){
    int i,j;
    int q=0;
    char dizgi[a+1];
    char dizgi2[a+1];
    for (i=0; i<=a; i++) {
        if (a%i==0) {
            dizgi[q++]=i;
        }
    }
    for (j=0; j<=q; j++) {
        
        if(dizgi[j]%)
    }
}
