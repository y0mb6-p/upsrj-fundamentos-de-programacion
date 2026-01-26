#include <stdio.h>
#include <math.h>

int is_even(int num)
{
    if (num % 2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num = 0;
    printf("Enter an integer number: ");
    scanf("%i",&num);

    int par = is_even(num);
    if (par==1)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
}

//int areayvolumen()
//{
    //float s = 0.0;
    //printf("Enter the length of the side: ");
    //scanf("%f",&s);
    //float area=s*s;
    //float vol=s*s*s;
    //printf("The area of the square is = %.2f",area);
    //printf("\nThe volume of the cube is = %.2f\n",vol);
    //eturn 0;
//}