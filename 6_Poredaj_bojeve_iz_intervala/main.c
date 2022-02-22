#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Unesite tri broja u intevralu od 50 do 200 ne ukljucujuci ta dva broja: ");
    scanf ("%d %d %d", &a, &b, &c);

    if ((a<50||a>200)||(b<50||b>200)||(c<50||c>200)){
        printf("Svi brojevi nisu iz intervala 50 do 200");}
    else{

    printf("Brojevi poredani po velicini glase:");

    if (a>b&&a>c){
    printf ("%d, ", a);
    } else if (b>a&&b>c){
    printf ("%d, ", b);
    }else if (c>a&&c>b) {
    printf ("%d, ", c);
    }


    if (b<a&&b>c){
    printf("%d, ", b);
    } else if (c<a&&c>b){
    printf("%d, ", c);
    } else if (a>b&&a<c){
    printf("%d, ", a);
    } else if (c<b&&c>a){
    printf("%d, ", c);
    } else if (a<c&&a>b){
    printf("%d, ", a);
    } else if (b<c&&b>a){
    printf("%d, ", b);
    }


    if (a<b&&a<c){
    printf ("%d", a);
    } else if (b<a&&b<c){
    printf ("%d", b);
    }else if (c<a&&c<b) {
    printf ("%d", c);
    }


    if (a!=b&&a!=c&&b!=c){
        printf("\nUnesen su 3 razlicita broja.");
    }

    else if (a==b&&a==c&&b==c){
    printf("\nUnesena su 3 ista broja.");
    }

    else if (b==c&&a!=b){
        printf("\nUnesena su 2 razlicita broja.");
    } else if (a==b&&c!=a){
        printf("\nUnesena su 2 razlicita broja.");
    } else if (a==c&&b!=a){
        printf("\nUnesena su 2 razlicita broja.");
    }
    }

    return 0;
}
