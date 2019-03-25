#include <stdio.h>
#include <stdlib.h>

//prototipo o firma de la funcion
int sumarNumeros(int,int);

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado = sumarNumeros(numeroUno,numeroDos);//llamado a la funcion

    printf("El resultado de la suma de %d y %d es: %d",numeroUno,numeroDos,resultado);

    return 0;
}

//desarrollo de la funcion
int sumarNumeros(int unNumero, int otroNumero)
{
    int resultado;

    resultado = unNumero+otroNumero;

    return resultado;
}

