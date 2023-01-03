#include <stdio.h>
#include <stdlib.h>

int i, a, multi;

int main()
{

    for ( i = 0; i <= 10; i++)
    {
        for (a = 0; a <= 10; a++)
        {
            multi = a*i;
            printf("\n%d x %d = %d", i, a, multi);
        }
        
    }
    return 0;
}
