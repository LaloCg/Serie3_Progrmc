#include <stdio.h>
#include <stdlib.h>

int f, i, e;

int main()
{   
    printf("Ingresa el numero de filas que se imprimiran : ");
    scanf("%d", &f);

    for ( i = 1; i <= f; i++)
    {
        for ( e = 1; e <= f-i; e++)
        {
            printf(" ");
        }

        for ( e = 1; e <= 2*i-1; e++)
        {
            printf("*");
        }

        printf("\n");
    };

    return 0;
}
