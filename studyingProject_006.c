//
//  main.c
//  work__001
//
//  Created by Gevher Büşra Yetişen on 2.02.2023.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int i;
    for (i=2; i<256; i++) {
        if(i%3==0){
            if(i%4==0){
                if(i%7!=0){
                    printf("%d ",i);
                }
            }
            
        }
    }
    return 0;
}
