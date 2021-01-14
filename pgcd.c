#include <stdio.h>

int main()
{
    int a, b,res;

    printf("Entre Votre A:\n");
    scanf("%d", &a);

    printf("Entre Votre B:\n");
    scanf("%d", &b);

    while(res != 0){

      res = a%b;

      printf("pgcd(a,b) => %d \n", b);

      if(res == 0){
        printf("pgcd de a et b est : %d \n", b);
      }
      b=res;
    }

    return 0;
}
