//
//  main.c
//  bz11_15.11.2022_03
//
//  Created by Gevher Büşra Yetişen on 15.11.2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int pos=0,neg=0,sifir=0,n,sayi,i;
    printf("Kac tane sayi gireceksiniz: \n");
    scanf("%d" ,&n);
    for (i=1; i<=n; i++) {
        printf("%d. sayi: ",i);
        scanf("%d", &sayi);
        
        if (sayi>0)
            pos++;
        else
            if(sayi<0)
                neg++;
           else
               sifir++;
    }
    printf("\nGirilen %d sayidan: \n" ,n);
    printf("%d tanesi pozitif sayidir.\n" ,pos);
    printf("%d tanesi negatif sayidir. \n" ,neg);
    printf("%d tanesi sifirdir. \n" ,sifir);
    return 0;
}
