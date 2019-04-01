#include "funciones.h"

void cargarVector(int vector[],int tam)
{
    int i;
    //carga secuencial
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

}

void mostrarVector(int vector[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("\n%d", vector[i]);
    }

}

int buscarMaximo(int numeros[],int tam)
{
    int i;
    int maximo;
    int flag=0;

    for(i=0;i<tam;i++)
    {
        if(flag == 0 || numeros[i]>maximo)
        {
            maximo = numeros[i];
            flag = 1;
        }
    }
    return maximo;
}


int buscarValor(int numeros[], int tam, int valor)
{
    int indice = -1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(numeros[i] == valor)
        {
            indice = i;
        }
    }
    return indice;
}
