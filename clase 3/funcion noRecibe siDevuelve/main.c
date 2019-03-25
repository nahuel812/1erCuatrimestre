#include <stdio.h>
#include <stdlib.h>

//prototipo o firma de la funcion
int sumarNumeros(void);

int main()
{
    int resultado;

    resultado = sumarNumeros();//llamado a la funcion

    printf("El resultado de la suma  es: %d",resultado);

    return 0;
}

//desarrollo de la funcion
int sumarNumeros(void)
{
    int resultado;
    int numeroUno;
    int numeroDos;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado = numeroUno+numeroDos;

    return resultado;
}
