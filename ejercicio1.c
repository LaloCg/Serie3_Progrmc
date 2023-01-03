#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    div_t division;
    printf("Ingresa un numero entero\n");
    scanf("%d", &numero);
    division = div(numero,2);

    if (division.rem == 0){
        printf("El numero es par");
    }
    else{
        printf("El numero que ingresaste el impar");
    };
    return 0;
}