//puedo incluir o no el stdio, pq ya esta incluido en el ingresos.c
#include <stdlib.h>
#include "ingresos.h"
#include "recursividad.h"

int main()
{
    /*
    int edad;
    int legajo;
    int peso;

    edad = pedirEntero("Ingrese edad: ");
    legajo = pedirEntero("Ingrese legajo: ");
    peso = pedirEntero("Ingrese peso: ");
    */

    int resultado = factorial(5);//hardcodeo el factorial de 5
    printf("El factorial es: %d \n", resultado);

    return 0;
}

