#include <stdio.h>
#include <stdlib.h>

int i, suma, a;

int main()
{
    suma = 0;
    for ( i = 1; i <= 100; i++)
    {
        for (a = i; a%2 == 0; a++)
        {
            suma = a + suma;
        }
    }
    
    printf("La suma de los numeros pares del 1 al 100 es: %d", suma);

    return 0;
}
