#include <stdio.h>

int main()
{
    int x, c, sum=0;

    printf("Unesite broj: ");
    scanf("%d", &x);

    while (x!=0){
        c=abs(x%10);
        sum=sum+c;
        x=x/10;
        }
    printf("Suma cifara iznosi: %d", sum);
    return 0;
}
