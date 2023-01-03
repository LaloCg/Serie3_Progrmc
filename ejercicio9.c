#include <stdio.h>
#include <stdlib.h>

int cantd, i, x, y, z;

int main()
{
    printf("Ingresa la cantidad de numeros que quieras visualizar: ");
    scanf("%d", &cantd);

    x = 1;
    y = 0;

    for ( i = 0; i < cantd; i++)
    {
        z = x + y;
        printf("%d, ", z);
        x = y;
        y = z;
    }
    
    return 0;
}
