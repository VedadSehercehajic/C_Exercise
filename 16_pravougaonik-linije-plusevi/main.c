#include <stdio.h>

int main (){

/*Varijable*/
int a, b, i, j;

/*Input*/
printf("Unesite stranice pravoigaonika a, b: ");
scanf("%d, %d", &a, &b);
getchar();

/*Obrada i output*/

    /*GORNJA LINIJA*/
    for (i=0;i<a;i++)
    {
    if (i==0||i==a-1)
    {
        printf("+");
    }
    else
    {
        printf("-");
    }
    }

    /*SREDINA*/
    printf("\n");

    for (j=0;j<b-2;j++)
    {
        for (i=0;i<a;i++)
        {
            if (i==0||i==a-1)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    /*DONJA LINIJA*/
    for (i=0;i<a;i++){
    if (i==0||i==a-1)
    {
        printf("+");
    }
    else
    {
        printf("-");
    }
}

return 0;
}

