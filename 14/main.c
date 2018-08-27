#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>

void  __fpurge(FILE *stream);

int main()
{
    printf("Imprimir de 3 en 3\n");

    int i;
    int skr;

    for(i=0;i<34;i++)
    {
        skr = i * 3;
        printf("%d\n", skr);
    }

    return 0;
}
