#include <stdio.h>

int main(){

 int i, j;

 /*ZAGLAVLJE*/
 printf("  X |");
 for (i=0;i<10;i++)
    {
    printf("%4d",i+1);
    }

 printf("\n");

 for(i=0;i<45;i++)
    {
     if (i==4)
     {
         printf("+");
     }
     else
     {
      printf ("-");
     }
     }

 printf("\n");

 /*TABLICA MNOZENJA*/

 for(j=0;j<10;j++)
 {
     printf("  %d |", j+1);
     for(i=0;i<10;i++)
     {
         printf("%4d", (i+1)*(j+1));
     }
     printf("\n");
 }

return 0;
}

