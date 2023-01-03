#include <stdio.h>
#include <stdlib.h>

int i, suma, num_ingresado;

int main()
{
    suma = 0;
    i = 0;

    while (i <= 7)
    {
        printf("Ingresa un numero: ");
        scanf("%d", &num_ingresado);
        suma = suma + num_ingresado;
        i++;
    };

    printf("La suma de los 8 numeros es: %d", suma);
    
    return 0;
}
