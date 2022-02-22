#include <stdio.h>
#include <math.h>

int main()

{
    int a, b, c, x;
    float f;
    printf("Unesite koeficijet a, b, c: ");
    scanf("%d, %d, %d", &a, &b, &c);

    printf("\nUnesite tacku x: ");
    scanf("%d", &x);

    if ((a<-10||a>10)||(b<-10||b>10)||(c<-10||c>10)){
        printf("Koeficijenti a, b i c nisu u zadanom rasponu.");
    } else {

    f=(float)a * pow((float)x,2) + (float)b * (float)x + (float)c;

    printf("Prva derivacija u tacki x=%d je %.0f.", x, f);
    }

    return 0;
}
