#include <stdio.h>
#include <stdlib.h>

/*
Se ingresan numero enteros(distintos de 0), hasta que el usuario quiera
informar:
a)cantidad de n ingresados
b)cantidad de n pares
c)cantidad de positivos
d)cantidad de negativos
e)maximo y minitmo (flags)
f)de positivos el mas chico
g)de los negativos el mas grande
h)cantidad de numeros que se encuentran entre el -10  y el 50
l)promedio total
*/

int main()
{
    int numero;
    char seguir;
    int contador=0;

    do
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&numero);

        if(numero == 0)
        {
            printf("Ingrese un numero distinto de 0: \n");
            scanf("%d",&numero);
        }
        printf("Desea ingresar otro numero? s/n \n");
        fflush(stdin);//para limpiar el buffer
        scanf("%s", &seguir);

        contador++;
    }while(seguir != 'n');

    printf("Cant. numeros ingresados: %d",contador);

    return 0;
}
