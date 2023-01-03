#include <stdio.h>
#include <stdlib.h>

int dia, mes;

int main()
{
    printf("Ingrese su dia de nacimiento: ");
    scanf("%d", &dia);
    printf("Ingrese su mes de nacimiento: ");
    scanf("%d", &mes);

    if (mes <= 12 && mes >= 1)
    {
        if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia <= 30 && dia >= 1))
        {
            goto signo;
        }

        else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia <= 31 && mes >= 1))
        {
            goto signo;
        }

        else if (mes == 2 && dia <= 29)
        {
            goto signo;
        }
        
        else
        {
            printf("Fechas invalidas");
        } 
    }

    else
    {
        printf("Mes invalido");
    }
    

    signo:
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 19))
    {
        printf("Tu signo es Acuario");
    }

    else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
    {
        printf("Tu signo es Piscis");
    }

    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
    {
        printf("Tu signo es Aries");
    }

    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20))
    {
        printf("Tu signo es Tauro");
    }
    
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
    {
        printf("Tu signo es Geminis");
    }

    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
    {
        printf("Tu signo es Cancer");
    }

    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
    {
        printf("Tu signo es Leo");
    }

    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
    {
        printf("Tu signo es Virgo");
    }

    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
    {
        printf("Tu signo es Libra");
    }

    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 22))
    {
        printf("Tu signo es Escorpion");
    }

    else if ((mes == 11 && dia >= 23) || (mes == 12 && dia <= 21))
    {
        printf("Tu signo es Sagitario");
    }

    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
    {
        printf("Tu signo es Capricornio");
    }

    return 0;
}
