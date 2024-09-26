//
//  main.c
//  bz111_15.11.2022_04
//
//  Created by Gevher Büşra Yetişen on 15.11.2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j,x;
    printf("Kac satir olacagini giriniz -> ");
    scanf("%d" ,&x);
    for (i=1; i<=x; i++) {
        for (j=1; j<=x-i; j++)
            printf(" ");
        for (j=1; j<=i; j++)
            printf("%d" ,j);
        printf("\n");
    }
    return 0;
}
