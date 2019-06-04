#include <stdio.h>
#include <stdlib.h>

void mostrar(void);
void otroMostrar(void);


void mostrarStrnig(char* mensaje);

int main()
{
    /*
    void (*pFunc)(void);//creo mi puntero a funcion
    pFunc = mostrar;//le paso su dir
    pFunc();

    pFunc = otroMostrar;
    pFunc();
    */

    void (*pFunc)(char*);
    pFunc = mostrarStrnig;
    pFunc("HOLA");

    return 0;
}

void mostrar(void)
{
    printf("hola a todos\n");
}
void otroMostrar(void)
{
    printf("chau a todos\n");
}

void mostrarStrnig(char* mensaje)
{
    printf("%s\n",mensaje);
}
