#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define T 5

int main()
{
    int numeros[T];
    int maximo;
    int indiceDelValor;

    cargarVector(numeros,T);
    mostrarVector(numeros,T);

    /*
    maximo = buscarMaximo(numeros, T);
    printf("\nEl maximo es:%d",maximo);
    */


    indiceDelValor = buscarValor(numeros,T,6);
    printf("\nEl indice es: %d",indiceDelValor);

    return 0;
}





