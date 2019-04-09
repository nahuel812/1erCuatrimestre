#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20]="naHUEL";
    char apellido[20]="BoRqUEZ";
    char nombreYApellido[40];

    strcpy(nombreYApellido, apellido);
    strcat(nombreYApellido, ", ");
    strcat(nombreYApellido, nombre);

    strlwr(nombreYApellido);

    printf("\nNombre y apellido ingresados: %s\n",nombreYApellido);



    return 0;
}
