#include<stdio.h>
#define stop -1

int main()
{
    int des=0,inp=0,i=0;

    while(stop != inp){
      printf("Entre : \n");
      scanf("%d",&inp);

      if(stop != inp){
        i++;
        des+=inp;
      }
    }

    printf(":::::::::::::::::\n \n");
    printf("La moyenne : %.2f \n",(float) des/i);

    return 0;
}
