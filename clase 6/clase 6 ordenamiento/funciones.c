#include "funciones.h"

void cargaSecuencial(int vector[], int tam)
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

int buscarMinimo(int numeros[],int tam)
{
    int i;
    int minimo;
    int flag=0;

    for(i=0;i<tam;i++)
    {
        if(flag == 0 || numeros[i]<minimo)
        {
            minimo = numeros[i];
            flag = 1;
        }
    }
    return minimo;
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


void ordenarVector(int numeros[], int tam)//ordenamiento por burbujeo
{
    int i,j,aux;

    for (i=0; i<tam-1; i++)
    {
        for (j=i+1; j<tam; j++)
        {
            if(numeros[i]>numeros[j])//criterio de ordenamiento
            {
                aux=numeros[i];

                numeros[i]=numeros[j];

                numeros[j]=aux;
            }
        }
    }
}
