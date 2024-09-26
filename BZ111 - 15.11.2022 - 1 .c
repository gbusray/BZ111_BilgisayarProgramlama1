//
//  main.c
//  bz11_15.11.2022_02
//
//  Created by Gevher Büşra Yetişen on 15.11.2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, n, f=1;
    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz -> ");
    scanf("%d" ,&n);
    for (i=1; i<=n; i++)
        f*=i;
    printf("%d!=%d dir.\n" ,n,f);
    return 0;
}
