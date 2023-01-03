#include <stdio.h>
#include <stdlib.h>

int numero, i;

int main()
{
    printf("Ingresa el numero de veces que se imprimira los asterisco: ");
    scanf("%d", &numero);

    for ( i = 1; i <= numero; i++)
    {
        printf("*");
    };
    return 0;
}
