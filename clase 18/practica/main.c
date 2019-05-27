#include <stdio.h>
#include <stdlib.h>


/*
un empleado de forma dinamica en main y ponerle valores

una funcion se encarga de recibir el empleado y lo va a guardar de forma binaria
la otra lee el empleado de forma binaria y lo va a mostar

las otras dos reciben el empleado, una escribe en formato de texto el empleado y la otra
lo va a leer y lo va a mostrar al empleado

*/

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}eEmpleado;

int main()
{
    eEmpleado* miEmplado;

    miEmpleado = (eEmpleado*) malloc(sizeof(eEmpleado));


    return 0;
}
