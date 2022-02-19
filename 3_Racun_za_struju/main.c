#include <stdio.h>

int main()
{
    /*varijable*/
    int vt, mt, up;
    float cvt, cmt, ir;
    double udvt, udmt;

    /* ulaz*/

    printf("Unesite vasu potrosnju el. struje pri velikoj tarifi u kWh: ");
    scanf("%d", &vt);


    printf("\nUnesite vasu potrosnju el. struje pri maloj tarifi u kWn: ");
    scanf("%d", &mt);

    printf("\nUnesite cijenu el. strune pri velikoj tarifi u KM: ");
    scanf ("%f", &cvt);

    printf("\nUnesite cijenu el. struje pri maloj tarifi u KM: ");
    scanf("%f", &cmt);

    /*obrada*/

    up = vt + mt;
    udvt = (vt/(float)up) * 100;
    udmt = (mt/(float)up) * 100;
    ir = (vt*cvt)+(mt*cmt);

    /*output*/

    printf("\nUkupna potrosnja je %d kWh.\n", up);
    printf("Udio velike tarife u ukupnoj potrosnji je %.2lf %%.\n", udvt);
    printf("Udio male tarife u ukupnoj potrosnji je %.2lf %%.\n", udmt);
    printf("Iznos racuna je %.2f KM.\n", ir);

    return 0;
}
