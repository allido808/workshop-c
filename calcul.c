#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b , addition,soustraction,multiplication,division,modulo;
    char d ;
    printf("choisie loperation : + ,-,*,/,% \n");
    scanf("%c",&d);
    printf("entrer a \n");
    scanf("%d",&a);

    printf("entrer b \n");
    scanf("%d",&b);
    if (d=='+'){
        addition = a+b ;
        printf("la somme de a et b : %d",addition);
        }
        else if(d=='-'){
            soustraction = a-b ;
            printf("la sous de a et b : %d",soustraction);
}
            else if (d=='*'){
            multiplication = a*b;
            printf("la multi de a et b : %d",multiplication);
            }
        else if (d=='/' && b != 0){
            division =a/b;
            printf("la div de a et b : %f",(float) division);
}
       else if (d=='%'){
        modulo = a%b ;
       }


    printf("la taille de a en octet est : %d",sizeof(a));
    printf("\n");
    printf("la taille de b en octet est : %d",sizeof(b));


    return 0;

}
