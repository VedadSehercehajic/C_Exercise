#include <stdio.h>


int main()
{
    /*varijable*/
    int broj,brojac,i;

    /*input*/
    printf("Unesite neki broj: ");
    scanf("%d", &broj);

    /*obrada output*/
    if (broj<=0)
    {
        printf("Broj nije prirodan!!");
        return 0;
    }
    if (broj==1)
    {
        printf("Broj 1 nije ni prost ni slozen");
        return 0;
    }
    if (broj>1)
    {
        for(i=2;i<broj;i++)
        {
            if(broj%i==0)
            {
                brojac++;
            }
        }
        if (brojac!=0)
        {
            printf("Broj nije prost");
        }
        else
        {
            printf("Broj je prost");
        }
    }

    return 0;
}
