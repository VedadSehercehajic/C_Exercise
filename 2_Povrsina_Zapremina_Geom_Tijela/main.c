#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    /* valjak varijable*/
    float povrsina_valjka, baza_valjka, omotac_valjka, poluprecnik_valjka, visina_valjka, volumen_valjka;

    /*kvadar varijable*/
    float povrsina_kvadra, baza_kvadra, a_dimenzija, b_dimenzija, c_dimenzija, omotac_kvadra, volumen_kvadra;

    /*tijelo varijable*/
    float povrsina_tijela, volumen_tijela;

    /*input*/

    printf("Dobrodosli u program za izracunavanje povrsine i volumena spojenog valjka i kvadra!\n");

    printf("Koliko iznosi poluprecnik valjka u cm?\n");
    scanf ("%f", &poluprecnik_valjka);

    printf("Koliko iznosi visina valjka?\n");
    scanf("%f", &visina_valjka);

    printf("Unesite dimezije kvadra u formatu a,b,c:\n");
    scanf("%f,%f,%f", &a_dimenzija, &b_dimenzija, &c_dimenzija);

    /*obrada*/

    baza_valjka = pow(poluprecnik_valjka,2) * visina_valjka;
    omotac_valjka = 2 * poluprecnik_valjka * PI * visina_valjka;
    povrsina_valjka = baza_valjka + omotac_valjka;
    volumen_valjka = visina_valjka * baza_valjka;

    baza_kvadra = a_dimenzija * b_dimenzija;
    omotac_kvadra = (2*a_dimenzija*c_dimenzija+2*b_dimenzija*c_dimenzija) - baza_valjka;
    povrsina_kvadra = 2 * baza_kvadra + omotac_kvadra;
    volumen_kvadra = a_dimenzija * b_dimenzija* c_dimenzija;

    povrsina_tijela = povrsina_kvadra + povrsina_valjka;
    volumen_tijela = volumen_kvadra + volumen_valjka;

    /*output*/

    printf("Povrsina tijela sa slike je %.2f\n", povrsina_tijela);
    printf("Zapremina tijela sa slike je %.2f\n", volumen_tijela);

    return 0;
}
