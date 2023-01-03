#include <stdio.h>
#include <stdlib.h>

int dia, mes, anno, intervalo, diaf, mesf;

int main()
{
    printf("Ingresa el numero del dia: ");
    scanf("%d", &dia);
    printf("Ingresa el numero del mes: ");
    scanf("%d", &mes);
    printf("Ingresa el anno, en el forma aaaa: ");
    scanf("%d", &anno);
    printf("Ingresa el intervalo: ");
    scanf("%d", &intervalo);

    diaf = dia + intervalo;

    if (diaf <= 30)
    {
        if (mes == 2)
        {
            if (anno%4 == 0 && anno%100 > 0 && anno%400 >= 0) // Año bisiesto
            {
                if (diaf<=29)
                {
                    printf("La fecha es %d/%d/%d", diaf, mes, anno);
                }
                else
                {
                    diaf = diaf - 29;
                    mesf = mes + 1;
                    printf("La fecha es %d/%d/%d", diaf, mesf, anno);
                }
            }
            else
            {
                diaf = diaf - 28;
                mesf = mes + 1;
                printf("La fecha es %d/%d/%d", diaf, mesf, anno);
            }
        }

        else
        {
            printf("La fecha es %d/%d/%d", diaf, mes, anno);
        }
    }



    else if (diaf > 30)
    {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            diaf = diaf - 30;
            mesf = mes + 1;
            printf("La fecha es %d/%d/%d", diaf, mesf, anno);
        }
        else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            diaf = diaf - 31;
            mesf = mes + 1;
            printf("La fecha es %d/%d/%d", diaf, mesf, anno);
        }

        else if (mes == 2)
        {
            if (anno%4 == 0 && anno%100 > 0 && anno%400 >= 0) // Año bisiesto
            {
                diaf = diaf - 29;
                mesf = mes + 1;
                printf("La fecha es %d/%d/%d", diaf, mesf, anno);
            }
            else
            {
                diaf = diaf - 28;
                mesf = mes + 1;
                printf("La fecha es %d/%d/%d", diaf, mesf, anno);
            }
        }
        
    }

    return 0;
}
