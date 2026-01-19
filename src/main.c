#include <stdio.h>

int main()
{
    float s = 0.0;
    printf("Enter the length of the side: ");
    scanf("%f",&s);
    float area=s*s;
    float vol=s*s*s;
    printf("The area of the square is = %.2f",area);
    printf("\nThe volume of the cube is = %.2f\n",vol);
    return 0;
}