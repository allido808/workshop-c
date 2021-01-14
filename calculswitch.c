#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b;
    char operateur;
    printf("choix de a :\n");
    scanf("%d",&a);
    printf("choix de b :\n");
    scanf("%d",&b);
    printf("choix de l'operateur : +,-,*,/,%% \n");
    scanf(" %c",&operateur);
    switch(operateur){
    case '+' :printf("la somme de a et b : %d",a+b);
    break;
    case '-' :printf("la sous de a et b : %d",a-b);
    break;
    case '*' :printf("la multi de a et b : %d",a*b);
    break;
    case '/' :printf("la division de a et b : %f",(float)a/b);
    break;
    case '%' :printf("le modulo de a et b : %d",a%b);
    break;

        default : ("aucune operation \n");           }

    return 0;
}
