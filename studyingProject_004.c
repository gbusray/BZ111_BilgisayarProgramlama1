//
//  main.c
//  work__002
//
//  Created by Gevher Büşra Yetişen on 2.02.2023.
//

#include <stdio.h>

int main(void) {
    char dizgi[24];
    dizgi[0] = 'a';
    dizgi[1] = 'b';
    dizgi[2] = 'c';
    dizgi[3] = 'd';
    dizgi[4] = 'e';
    dizgi[5] = 'f';
    dizgi[6] = 'g';
    dizgi[7] = 'h';
    dizgi[8] = 'i';
    dizgi[9] = 'j';
    dizgi[10] = 'k';
    dizgi[11] = 'l';
    dizgi[12] = 'm';
    dizgi[13] = 'n';
    dizgi[14] = 'o';
    dizgi[15] = 'p';
    dizgi[16] = 'r';
    dizgi[17] = 's';
    dizgi[18] = 't';
    dizgi[19] = 'u';
    dizgi[20] = 'v';
    dizgi[21] = 'y';
    dizgi[22] = 'z';
    int i,x,y,z;
    printf("Bir sayı giriniz:");
    scanf("%d",&x);
    
    for (z=1; z<=x; z++) {
        for (i=z-1; i<x-1; i++) {
            printf("%c",dizgi[i]);
        }
        for (y=x; x-z<y; y--) {
            printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}
