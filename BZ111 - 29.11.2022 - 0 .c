//
//  main.c
//  bz11_29.11.2022_001
//
//  Created by Gevher Büşra Yetişen on 29.11.2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x,*xptr=&x;
    printf("x degerini giriniz ->\n");
    scanf("%d" ,&x); // ya da scanf("%d",xptr);
    printf("Gostergenin icindeki adres = %p\n" ,xptr);
    printf("Gostergenin gosterdigi hucrenin icerig =%d\n" ,*xptr);
    return 0;
}
