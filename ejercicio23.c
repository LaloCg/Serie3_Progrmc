#include <stdio.h>
#include <stdlib.h>

int num1, i, division, num2, sum1, sum2;

int main()
{
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    i = 1;
    sum1 = 0;
    division = num1/i;
    while (division != 1)
    {
        if (num1%i == 0)
        {
            sum1 = (sum1 + i);
        }
        division = num1/i;
        i++;
    }


    i = 1;
    sum2 = 0;
    division = num2/i;
    while (division != 1)
    {
        if (num2%i == 0)
        {
            sum2 = (sum2 + i);
        }
        division = num2/i;
        i++;
    }


    if (num1 == sum2 && num2 == sum1)
    {
        printf("Los numeros %d y %d son amigos", num1, num2);
    }
    else
    {
        printf("Los numeros %d y %d no son amigos", num1, num2);
    }
    
    return 0;
}