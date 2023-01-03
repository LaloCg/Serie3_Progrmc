#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Ingresa el numero que quieras convertir a romano: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1: printf("I"); break;
        case 2: printf("II"); break;
        case 3: printf("III"); break;
        case 4: printf("IV"); break;
        case 5: printf("V"); break;
        case 6: printf("VI"); break;
        case 7: printf("VII"); break;
        case 8: printf("VIII"); break;
        case 9: printf("IX"); break;
        case 10: printf("X"); break;
        case 11: printf("XI"); break;
        case 12: printf("XII"); break;
        case 13: printf("XIII"); break;
        case 14: printf("XIV"); break;
        case 15: printf("XV"); break;
        case 16: printf("XVI"); break;
        case 17: printf("XVII"); break;
        case 18: printf("XVIII"); break;
        case 19: printf("XIX"); break;
        case 20: printf("XX"); break;
        case 21: printf("XXI"); break;
        case 22: printf("XXII"); break;
        case 23: printf("XXIII"); break;
        case 24: printf("XXIV"); break;
        case 25: printf("XXV"); break;
        case 26: printf("XXVI"); break;
        case 27: printf("XXVII"); break;
        case 28: printf("XXVIII"); break;
        case 29: printf("XXIX"); break;
        case 30: printf("XXX"); break;
    }

    return 0;
}