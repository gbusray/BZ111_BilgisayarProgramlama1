//
//  main.c
//  final_sorusu_benzeri_01
//
//  Created by Gevher Büşra Yetişen on 31.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int i,j,x,y;
    char dizgi1[8][8];
    char dizgi2[8][8];
    
    printf("En fazla 64 karakterden olusan bir dizgi giriniz:\n");
    gets(dizgi1);
    printf("No 1:\n");
    printf("%s\n",dizgi1);
    dizgi2[0][0]=dizgi1[0][0];
    dizgi2[0][1]=dizgi1[0][1];
    for (i=0; i<=7; i++) {
        for (j=0; j<=7; j++) {
            for (x=0; x<=7; x++) {
                for (y=1; y<=7; y++) {
                    do {
                        dizgi2[i][j]=dizgi1[x+1][y-1];
                        printf("No 2:\n");
                        printf("%s\n",dizgi2[8][8]);
                    } while (y>=0&&x>=0);
                }
            }
        }
    }
    return 0;
}
