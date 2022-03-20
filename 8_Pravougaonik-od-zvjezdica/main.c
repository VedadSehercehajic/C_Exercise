#include <stdio.h>

int main (){

int n, i, j;

printf("Unesite neki broj: ");
scanf("%d", &n);

/*gornja linija*/
for (i=0;i<n;i++){
    printf("*");
}
printf("\n");


/*srednja linija*/
for(j=0;j<n;j++){
    for (i=0;i<n;i++){
        if (i==0||i==n-1){
        printf("*");
        }else {
        printf(" ");
        }
    }
    printf("\n");
}


/*donja linija*/
for (i=0;i<n;i++){
    printf("*");
}
printf("\n");

return 0;
}
