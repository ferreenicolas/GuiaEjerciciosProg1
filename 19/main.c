#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>

void  __fpurge(FILE *stream);

int main()
{
    printf("Ingresar un numero entero por consola y hacer la suma de todos los numeros anteriores al ingresado comenzando desde 0 y mostrar resultado.\n");

    int numero;
    int i;
    int acumulador = 0;

    scanf("%d", &numero);

    for(i = 0; i == numero ; i++)
    {
        acumulador = acumulador + i;
    }

    printf("La suma es: %d\n", acumulador);
    printf("El numero es: %d\n", numero);

    return 0;
}
