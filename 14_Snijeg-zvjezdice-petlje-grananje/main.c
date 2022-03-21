#include <stdio.h>


int main()
{
    int n, j, i;

    /*input*/
    printf("Unesite neki broj: ");
    scanf("%d", &n);

    /*obrada output*/

    for (j=0;j<n;j++)
        {
            if(j%2==0)
            {
            printf(" ");
                for (i=0;i<n;i++)
                {
                printf("* ");
                }
            }
            else
            {
                for (i=0;i<n;i++)
                {
                printf("* ");
                }
            }
            printf("\n");
        }


        return 0;
    }


