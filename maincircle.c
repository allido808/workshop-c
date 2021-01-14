#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#include"function.c"


int main()
{
    float r;
    printf("entrer la valeur de rayon:\n");
    scanf("%f",&r);
    printf("le diametre est: %f \n ",diametre(r));
    printf("le perimetre est: %f \n ",perimetre(r));
    printf("la surface est: %f \n",surface(r));
    return 0;
}
