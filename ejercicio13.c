#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int opc, i, e;
float base, altura, area, lado, lados1, lados2, perimetro, ang1, ang2, ang3;

int main()
{
    printf("\nOpcion 1: Triangulo Equilatero");
    printf("\nOpcion 2: Triangulo Isosceles");
    printf("\nOpcion 3: Triangulo Escaleno");

    printf("\nElige una opcion: ");
    scanf("%d", &opc);


    if (opc == 1)
    {
        printf("\n\n------Triangulo Equilatero------");

        printf("\nOpcion 1: Calcular Area");
        printf("\nOpcion 2: Calcular Perimetro");
        printf("\nOpcion 3: Calcular Angulos");

        printf("\nElige una opcion: ");
        scanf("%d", &opc);

        if (opc == 1)
        {
            printf("\n-----Calcular Area-----");

            printf("\nIngresa los siguentes datos ");
            printf("\nIngresa el valor de la base: ");
            scanf("%f", &base);
            printf("\nIngresa el valor de la altura: ");
            scanf("%f", &altura);

            area = (base * altura)/2;
            printf("\nEl valor del Area es de: %f", area);
        }
        
        else if (opc == 2)
        {
            printf("\n-----Calcular Perimetro-----");

            printf("\nIngresa el valor de uno de sus lados: ");
            scanf("%f", &lado);

            perimetro = lado *3;
            printf("El valor del Perimetro es el siguente: %f", perimetro);
        }

        else if (opc == 3)
        {
            printf("-----Calcular Angulos-----");
            printf("\nIngrese el valor de uno de sus lados: ");
            scanf("%f", &lado);

            altura = sqrt(pow(lado,2) - pow((lado/2),2));

            for ( i = 1; i <= altura; i++)
            {
                for ( e = 1; e <= altura-i; e++)
                {
                    printf(" ");
                }

                for ( e = 1; e <= 2*i-1; e++)
                {
                    printf("*");
                }

                printf("\n");
        
            };

            printf("Todos sus angulos son iguales: 60 deg");
        };
        
    }


    else if (opc == 2)
    {
        printf("\n\n------Triangulo Isosceles------");

        printf("\nOpcion 1: Calcular Area");
        printf("\nOpcion 2: Calcular Perimetro");
        printf("\nOpcion 3: Calcular Angulos");

        printf("\nElige una opcion: ");
        scanf("%d", &opc);

        if (opc == 1)
        {
            printf("\n-----Calcular Area-----");

            printf("\nIngresa los siguentes datos ");
            printf("\nIngresa el valor de la base: ");
            scanf("%f", &base);
            printf("\nIngresa el valor de la altura: ");
            scanf("%f", &altura);

            area = (base * altura)/2;
            printf("\nEl valor del Area es de: %f", area);
        }
        
        else if (opc == 2)
        {
            printf("\n-----Calcular Perimetro-----");

            printf("\nIngresa el valor del lado diferente o base: ");
            scanf("%f", &lados1);
            printf("\nIngresa el valor de los dos lados iguales: ");
            scanf("%f", &lados2);

            perimetro = (lados2 * 2) + lados1;
            printf("El valor del Perimetro es el siguente: %f", perimetro);
        }

        else if (opc == 3)
        {
            printf("-----Calcular Angulos-----");
            printf("\nIngresal el valor del angulo opuesto a la base: ");
            scanf("%f", &ang1);
            ang2 = (180 - ang1)/2;
            ang3 = ang2;
            printf("\nEl segundo angulo es: %f deg", ang2);
            printf("\nEl tercer angulo es: %f deg", ang3);
        }
    }
    
    
    else if (opc == 3)
    {
        printf("\n\n------Triangulo Escaleno------");

        printf("\nOpcion 1: Calcular Area");
        printf("\nOpcion 2: Calcular Perimetro");
        printf("\nOpcion 3: Calcular Angulos");

        printf("\nElige una opcion: ");
        scanf("%d", &opc);

        if (opc == 1)
        {
            printf("\n-----Calcular Area-----");

            printf("\nIngresa los siguentes datos ");
            printf("\nIngresa el valor de la base: ");
            scanf("%f", &base);
            printf("\nIngresa el valor de la altura: ");
            scanf("%f", &altura);

            area = (base * altura)/2;
            printf("\nEl valor del Area es de: %f", area);
        }
        
        else if (opc == 2)
        {
            printf("\n-----Calcular Perimetro-----");

            printf("\nIngresa el valor de un lado: ");
            scanf("%f", &lados1);
            printf("\nIngresa el valor del segundo lado: ");
            scanf("%f", &lados2);
            printf("\nIngresa el valor del tercer lado: ");
            scanf("%f", &lado);

            perimetro = lados1 + lados2 + lado;
            printf("El valor del Perimetro es el siguente: %f", perimetro);
        }

        else if (opc == 3)
        {
            printf("-----Calcular Angulos-----");

            printf("\nIngresa el valor del primer lado: ");
            scanf("%f", &lado);
            printf("\nIngresa el valor del segundo lado: ");
            scanf("%f", &lados1);
            printf("\nIngresa el valor del tercer lado: ");
            scanf("%f", &lados2);

            ang1 = acos(- (pow(lado,2)-pow(lados1,2)-pow(lados2,2))/(2*lados1*lados2))*180/PI;
            ang2 =asin((lados1*(sin(ang1*PI/180)))/(lado))*180/PI;
            ang3 = 180 - ang1 - ang2;

            printf("\nEl valor del angulo opuesto al primer lado es: %f deg",ang1);
            printf("\nEl valor del angulo opuesto al segundo lado es: %f deg", ang2);
            printf("\nEl valor del angulo opuesto al tercer lado es: %f deg", ang3);
        }
    }
    
    
    return 0;
}
