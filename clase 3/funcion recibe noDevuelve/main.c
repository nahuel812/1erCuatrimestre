#include <stdio.h>
#include <stdlib.h>

//prototipo o firma de la funcion
void sumarNumeros(int,int);

int main()
{
    int numeroUno;
    int numeroDos;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    sumarNumeros(numeroUno,numeroDos);//llamado a la funcion

    return 0;
}

//desarrollo de la funcion
void sumarNumeros(int unNumero, int otroNumero)
{
    int resultado;

    resultado = unNumero+otroNumero;

    printf("El resultado de la suma  es: %d",resultado);

}
