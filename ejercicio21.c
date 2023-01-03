#include <stdio.h>
#include <stdlib.h>

int num1, i, division, j, num;

int main()
{
    printf("Ingresa el numero para generar la tabla del minimo comun multiplo: ");
    scanf("%d", &num1);

    num = num1;
    i = 2;
    j = 0;
    division = num1/i;

    while (division != 1)
    {
        division = num1/i;
        if (num1%i == 0)
        {
            j++;
            printf("\nEl %d multiplo de %d es %d", j, num, i);
            num1 = division;
            i = i - 1;
        }
        
        i++;
    }
    
    return 0;
}
