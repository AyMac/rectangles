// Andrew McGinnis
// CECS 121 - 02
// Jan 30, 2009
// Project 01 - Rectangles

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sideA;
    printf("Enter the length of side a: ");
    scanf("%f", &sideA);
    float sideB;
    printf("\nEnter the length of side b: ");
    scanf("%f", &sideB);
    printf("\n\n\nRectangle Project\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("\tSide A:\t\t%8.2f\n", sideA);
    printf("\tSide B:\t\t%8.2f\n", sideB);
    printf("\tPerimeter:\t");
    printf("%8.2f\n", 2 * (sideA + sideB));
    printf("\tArea:\t\t%8.2f\n", sideA * sideB);
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");   
    
    
    system("pause");
    return 0;
    
}
