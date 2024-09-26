//
//  main.c
//  homework_001
//
//  Created by Gevher Büşra Yetişen on 14.11.2022.
//

#include <stdio.h>
#include <stdlib.h>
#define π 3.14

int main(void) {
    int operation, shape, x, y, z;
    //float π;
    //π = 3.14;
    printf(" 1. Calculating area \n 2. Calculating volume \n Choose the operation that you want to calculate:\n");
    scanf("%d", &operation);
    
    if (operation == 1)
    {
        printf(" 1. Square's area \n 2. Rectangle's area \n 3. Triangle's area \n 4. Circle's area \n Please choose the shape that you want to calculate its' area: \n");
        scanf("%d", &shape);
        switch (shape)
        {
            case 1: printf("Square's side's length : "); scanf("%d", &x);
                    printf(" Area: %d \n", x*x);
                    break;
                    
            case 2: printf("Rectangel's two different side's length : "); scanf("%d%d", &x,&y);
                    printf(" Area: %d \n", x*y);
                    break;
                    
            
            case 3: printf("Triangle's base and height's length : "); scanf("%d%d", &x,&y);
                    printf(" Area: %f \n", (x*y)/2.0 );
                    break;
            
            case 4: printf("Circle's radius's length : \n"); scanf("%d", &x);
                    printf(" Area: %.2f \n", π*x*x);
                    break;
            
            default: printf("Please choose a valid operation. \n");
        }
    }
    
    else
        if (operation != 2)
            printf("Please choose a valid operation. \n");
        
        else
        {
            printf(" 1. Cube \n 2. Cylinder \n 3. Sphere \n 4. Cone \n 5. Rectangular parallelepiped \n 6. Triangular Prism \n 7. Square prism \n" " Please choose the shape that you want to calculate its' volume: ");
    
            scanf("%d", &shape);
            
            switch (shape)
            {
                case 1: printf("Cube's side's length: "); scanf("%d", &x);
                        printf(" Volume: %d \n", x*x*x);
                        break;
                
                case 2: printf("Cylinder's height's and radius's length: "); scanf("%d%d", &x,&y);
                        printf(" Volume: %.2f \n", x*x*y*π);
                        break;
                
                case 3: printf("Sphere's radius's length : "); scanf("%d", &x);
                        printf(" Volume: %.3f \n", (x*x*x*π*4)/3);
                        break;
                
                case 4: printf("Cone's height's and radius's length: "); scanf("%d%d", &x,&y);
                        printf(" Volume: %.3f \n", (π*x*x*y)/3);
                        break;
                
                case 5: printf("Rectangular parallelepiped's two different side's and height's length : : "); scanf("%d%d%d", &x,&y,&z);
                        printf(" Volume: %d \n", x*y*z);
                        break;
                        
                case 6: printf("Triangular Prism's base's, normal's and height's length: "); scanf("%d%d%d", &x,&y,&z);
                        printf(" Volume: %.2f \n", ((x*y)/2.0)*z);
                        break;
                        
                case 7:  printf("Square prism's side's length and height: "); scanf("%d%d", &x,&y);
                        printf(" Volume: %d \n", x*x*y);
                        break;
                
                default: printf("Please choose a valid operation. \n");
            }
        }
        
    printf("Thanks, for new calculations please run the product again! \n");
    return 0;
}

