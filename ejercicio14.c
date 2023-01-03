#include <stdio.h>
#include <stdlib.h>

float temc;
int i;

int main()
{
    i = 0;
    while (i <= 360)
    {
        temc = (i-32)*(0.555555);
        printf("\nLa temperatura de %d en Celsius es: %f", i, temc);
        i = i + 20;
    }
    
    return 0;
}
