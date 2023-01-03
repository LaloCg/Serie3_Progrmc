#include <stdio.h>
#include <stdlib.h>

int i, contdr;
float promedio, suma, num_ingresado;

int main()
{
    suma = 0;
    printf("Escribe la cantidad de numeros que quieras sacar el promedio: ");
    scanf("%d", &i);
    contdr = 1;

    do
    {
        printf("Ingresa un numero: ");
        scanf("%f", &num_ingresado);
        suma =  suma + num_ingresado;
        contdr++;

    } while (contdr <= i);
    
    promedio = suma/i;
    printf("El promedio de los %d numeros es: %f", i, promedio);

    return 0;
}