//
//  main.c
//  work_001
//
//  Created by Gevher Büşra Yetişen on 31.01.2023.
//
//Hakan amcanın yolladığı örnek 1

#include <stdio.h>

int main(void) {
    int m=4,n=4;
    char dizi1[m*n];
    char dizi2[m][n];
    
    printf("Bir karakter dizisi giriniz:\n");
    gets(dizi1);
    
    int i,j;
    
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            dizi2[i][j]=dizi1[m*i+j];
            printf("Karakter %c\n",dizi2[i][j]);
        }
    }
    return 0;
}

