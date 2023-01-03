#include <stdio.h>
#include <stdlib.h>

int num, i, factorial;

int main()
{
    printf("Ingresa un numero para calcular su factorial: ");
    scanf("%d", &num);

    factorial = 1;

    for ( i = 1; i <= num; i++)
    {
       factorial = factorial * i;
    }
    
    printf("El factorial del numero %d es: %d", num, factorial);
    
    return 0;
}
