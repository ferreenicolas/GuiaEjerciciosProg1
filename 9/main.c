#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>

void  __fpurge(FILE *stream);


int main()
{
    int i;
    int contA=0;
    int contE=0;
    int contI=0;
    int contO=0;
    int contU=0;
    char letra;

    printf("Escribir un programa que realice lea por teclado 20 caracteres. Luego cuente las a,e,i,o,u.\n");

    for(i=0; i<20;i++)
    {
        printf("Ingrese letra: ");

        scanf("%c", &letra);
        __fpurge(stdin);

        if(letra == 'a')
        {
            contA++;
        }
        if(letra == 'e')
        {
            contE++;
        }
        if(letra == 'i')
        {
            contI++;
        }
        if(letra == 'o')
        {
            contO++;
        }
        if(letra == 'u')
        {
            contU++;
        }

    }

    printf("Cantidad de A's: %d\nCantidad de E's: %d\nCantidad de I's: %d\nCantidad de O's: %d\nCantidad de U's: %d\n", contA,contE,contI,contO,contU);



    return 0;
}


