//
//  main.c
//  project001
//
//  Created by Gevher Büşra Yetişen on 5.12.2022.
//

#include <stdio.h>

int main(void) {
    int number;
    printf("Please write a number -> \n");
    scanf("%d",&number);
    printf("%12d\n" ,number);
    printf("%-12d\n" ,number);
    printf("% 12d\n" ,number);
    return 0;
}
