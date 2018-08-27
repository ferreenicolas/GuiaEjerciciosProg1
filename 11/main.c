#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>

void  __fpurge(FILE *stream);

int main()
{
    printf("Escribir un programa q muestre los numeros impares entre 0 y 100 y q imprima cuantos impares hay lol.\n");

    int numAct;
    int i;
    int contPar;

    for(i=0; i<101; i++)
    {
        if(i%2 == 0)
        {
            contPar++;
            printf("%d\n", i);
        }
    }

    return 0;
}
