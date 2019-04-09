#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define T 5

int main()
{
    int numeros[T];
    int maximo, minimo;
    int indiceDelValor;

    //CARGA DE VECTOR
    cargaSecuencial(numeros,T);
    mostrarVector(numeros,T);

    //BUSCAR MAXIMO
    maximo = buscarMaximo(numeros, T);
    printf("\nEl maximo es:%d\n",maximo);

    //BUSCAR MINIMO
    minimo = buscarMinimo(numeros,T);
    printf("\nEl minimo es: %d\n",minimo);

    //BUSCAR EL INDICE DE UN NUMERO EN ESPECIFICO
    indiceDelValor = buscarValor(numeros,T,6);
    printf("\nEl indice es del numero a buscar es: %d\n",indiceDelValor);


    //ORDENAMIENTO
    ordenarVector(numeros, T);
    mostrarVector(numeros,T);

    return 0;
}


