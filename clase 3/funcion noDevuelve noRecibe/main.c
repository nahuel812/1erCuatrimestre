#include <stdio.h>
#include <stdlib.h>

//prototipo o firma de la funcion
void sumarNumeros(void);

int main()
{
    sumarNumeros();
    return 0;
}

//desarrollo de la funcion
void sumarNumeros(void)
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado = numeroUno+numeroDos;

    printf("El resultado de la suma es: %d",resultado);
}
