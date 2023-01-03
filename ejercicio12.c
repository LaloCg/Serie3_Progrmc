#include <stdio.h>
#include <stdlib.h>

int opc, cantd, i;
float precio, suma, promedio, iva;

int main()
{
    salir:
    printf("\n\n\nOpcion 1: 'Calcular el promedio' ");
    printf("\nOpcion 2: 'Calcular el IVA' ");
    printf("\nOpcion 3: 'Calcular la suma total de los productos' ");
    printf("\nOpcion 4: 'Salir' ");
    printf("\nSeleccione la opccion: ");
    scanf("%d", &opc);

    if (opc == 1)
    {
        printf("\n----------Calcular el promedio----------");
        printf("\nIngrese la cantidad de productos: ");
        scanf("%d", &cantd);
        suma = 0;
        for ( i = 1; i <= cantd; i++)
        {
            printf("\nIngresa el valor del producto %d: ",i);
            scanf("%f", &precio);
            suma = precio + suma;
        }

        promedio = suma / cantd;
        printf("\nEl promedio de los productos es de: %f", promedio);

        printf("\nOpcion 4: 'Salir' ");
        printf("\nSeleccione la opccion: ");
        scanf("%d", &opc);

        if (opc == 4)
        {
            goto salir;
        }
        
    }
    

    else if (opc == 2)
    {
        printf("----------Calcular IVA----------");
        printf("\nIngrese la cantidad de productos: ");
        scanf("%d", &cantd);
        suma = 0;
        for ( i = 1; i <= cantd; i++)
        {
            printf("\nIngresa el valor del producto %d: ",i);
            scanf("%f", &precio);
            suma = precio + suma;
        }

        iva = suma*0.16;
        printf("\nEl IVA de los productos es de: %f", iva);

        printf("\nOpcion 4: 'Salir' ");
        printf("\nSeleccione la opccion: ");
        scanf("%d", &opc);

        if (opc == 4)
        {
            goto salir;
        }
    }


    else if (opc == 3)
    {
        printf("\n----------Calcular suma total de productos----------");
        printf("\nIngrese la cantidad de productos: ");
        scanf("%d", &cantd);
        suma = 0;
        for ( i = 1; i <= cantd; i++)
        {
            printf("\nIngresa el valor del producto %d: ",i);
            scanf("%f", &precio);
            suma = precio + suma;
        }
        printf("\nLa suma de los productos es de: %f", suma);

        printf("\nOpcion 4: 'Salir' ");
        printf("\nSeleccione la opccion: ");
        scanf("%d", &opc);

        if (opc == 4)
        {
            goto salir;
        }
    }


    else if (opc == 4)
    {
        goto salir;
    }

    
    return 0;
}
