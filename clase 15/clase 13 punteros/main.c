#include <stdio.h>
#include <stdlib.h>


/*
funciones todo con punteros

cargar vector de numeros
mostrar
ordenar
borrar uno - los num no pueden ser 0

*/
int main()
{
    /*
    int* x;
    int v = 10;

    x=&v; //asignacion

    printf("el valor de v:%d \n",v);
    printf("dir memoria v:%p \n",&v);
    printf("dir memoria x:%p \n",&x);
    printf("el valor de x:%p \n",x);
    printf("el valor al que apunta x:%d \n",*x);
   */

    //ejemplo 1
    /*
    char caracter= 'f';
    char* pCaracter;

    pCaracter = &caracter;

    printf("Ingrse un caracter: ");
    fflush(stdin);
    scanf("%c",pCaracter);

    printf("\nCaracter ingresado guardado en pCaracter:%c",*pCaracter);
    printf("\nCaracter ingresado guardado en caracter:%c",caracter);
    */

    //ejemplo 2
    int p;
    int* q;
    int* r;

    p=10;
    q=&p;
    r=q;

    printf("q:%p\n",q);
    printf("r:%p\n",r);
    printf("*q:%d\n",*q);
    printf("*r:%d\n",*r);

    return 0;
}
