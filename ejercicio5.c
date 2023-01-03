#include <stdio.h>
#include <stdlib.h>

int i, suma, num_ingresado, contdr;

int main()
{
    suma = 0;
    printf("Escribe la cantidad de numeros que quieras sumar: ");
    scanf("%d", &i);
    contdr = 1;

    while (contdr <= i)
    {
        printf("Ingresa un numero: ");
        scanf("%d", &num_ingresado);
        suma = suma + num_ingresado;
        contdr++;
    };

    printf("La suma de los %d numeros es: %d", i, suma);

    return 0;
}
