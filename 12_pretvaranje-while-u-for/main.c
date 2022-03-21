#include <stdio.h>

int main()
{
    int broj, suma;

    while(suma<=100){
        printf("Unesite broj: ");
        scanf("%d", &broj);
        suma=suma+broj;
    }

    /*WHILE PRETVOREN U FOR*/
    /*
    for (; suma<=100;suma=suma+broj){
     printf("Unesite broj: ");
    scanf("%d", &broj);
    }*/

    printf("Suma je : %d", suma);
    return 0;
}
