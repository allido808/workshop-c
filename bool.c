#include<stdio.h>
#define true 1
#define false !true
#define Max(a,b) ( a>b ? true:false )
typedef int bool;


bool main()
{
    int a,b;

    printf("Entre Votre A : \n");
    scanf("%d",&a);

    printf("Entre Votre B : \n");
    scanf("%d",&b);

    printf("verifier si if a > b : %d \n",Max(a,b));


}
