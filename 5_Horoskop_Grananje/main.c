#include <stdio.h>


int main()
{
    /*varijable*/
    int dan, mjesec;


    printf("Dobrodosli u vas horoskop!\n");
    printf("U kojem ste mjesecu rodjeni, unesite broj od 1 do 12?\n");
    scanf("%d", &mjesec);
    printf("Na koji dan ste rodjeni?\n");
    scanf("%d", &dan);

    if (mjesec==1&&dan>=20&&dan<=31){
            printf("Vas znak je vodolija!");
    }else if (mjesec==2&&dan>=1&&dan<=18){
        printf("Vas znak je vodolija!");
    }

    else if (mjesec==2&&dan>=19&&dan<=29){
        printf("Vas znak je riba!");
    } else if (mjesec==3&&dan>=1&&dan<=20){
        printf("Vas znak je riba!");
    }

    else if (mjesec==3&&dan>=21&&dan<=31){
        printf("Vas znak je ovan!");
    } else if (mjesec==4&&dan>=1&&dan<=19){
    printf("Vas znak je ovan!");
    }

    else if (mjesec==4&&dan>=20&&dan<=30){
            printf("Vas znak je bik!");
        } else if (mjesec==5&&dan>=1&&dan<=20){
        printf("Vas znak je bik!");
        }

    else if (mjesec==5&&dan>=21&&dan<=31){
        printf("Vas znak je blizanac!");
    } else if (mjesec==6&&dan>=1&&dan<=20){
    printf("Vas znak je blizanac!");
    }

    else if (mjesec==6&&dan>=21&&dan<=30){
        printf("VAs znak je rak!");
    } else if (mjesec==7&&dan>=1&&dan<=22){
    printf("Vas znak je rak!");
    }

    else if (mjesec==7&&dan>=23&&dan<=31) {
        printf("Vas znak je lav!");
    }else if (mjesec==8&&dan>=1&&dan<=22) {
    printf("Vas znak je lav!");
    }

    else if (mjesec==8&&dan>=23&&dan<=31) {
        printf("Vas znak je djevica!");
    } else if (mjesec==9&&dan>=1&&dan<=22) {
    printf("Vas znak je djevica!");
    }

    else if (mjesec==9&&dan>=23&&dan<=30) {
        printf("Vas znak je vaga!");
    } else if (mjesec==10&&dan>=1&&dan<=22) {
    printf("Vas znak je vaga!");
    }

    else if (mjesec==10&&dan>=23&&dan<=31){
        printf("Vas znak je skorpija!");
    } else if (mjesec==11&&dan>=1&&dan<=21){
    printf("Vas znak je skorpija!");
    }

    else if (mjesec==11&&dan>=22&&dan<=30) {
        printf("Vas znak je strijelac!");
    } else if (mjesec==12&&dan>=1&&dan<=21) {
    printf("Vas znak je strijelac!");
    }

    else if (mjesec==12&&dan>=22&&dan<=31){
        printf("Vas znak je jarac!");
    } else if (mjesec==1&&dan>=1&&dan<=19){
    printf("Vas znak je jarac!");
    }

    else if (mjesec<1||mjesec>12) {
        printf("Unijeli ste pogresan mjesec!!!!!\n");
    }

    else {
        printf("Unijeli ste pogresan dan!\n");
    }

    return 0;
}
