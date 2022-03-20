#include <stdio.h>

int main () {

    int i, j, a;

    for (j=1;j<=10;j++){
        for (i=1; i<=10; i++) {
            a=j*i;
            printf("%4d ", a);
        }
        printf("\n");
    }
return 0;
}
