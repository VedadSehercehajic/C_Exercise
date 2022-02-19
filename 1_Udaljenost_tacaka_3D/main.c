/* Napraviti program koji sa standardnog ulaza (tastature) u�itava koordinate dvije ta�ke u trodimenzionalnom
prostoru. Ta�ke t1
i t2
su definirane kao trojke:

t1=(x1, y1, z1)
t2=(x2, y2, z2)

Program na standardni izlaz (ekran) treba da ispi�e udaljenost izme�u ove dvije ta�ke. Za ra�unanje drugog korijena
mo�ete koristiti funkciju sqrt koja je definisana u biblioteci �math.h�. Primjer kori�tenja ove funkcije je:
x = sqrt(y); /* x je korijen od y */*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e , f;
    double udaljenost;
    printf("Unesite koordinate tacke A:\n");
    scanf("%d,%d,%d",&a, &b, &c);
    printf("Unesite koordinate tacke B;\n");
    scanf("%d,%d,%d", &d, &e, &f);


    udaljenost= sqrt(pow(a-d,2) + pow(b-e,2) + pow(c-f,2));

    printf("Udaljenost tacke A i Tacke B  iznosi:%lf", udaljenost);
    return 0;
}
