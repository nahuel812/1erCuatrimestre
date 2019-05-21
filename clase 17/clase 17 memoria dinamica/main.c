#include <stdio.h>
#include <stdlib.h>

/*
-el heap no es apilable
*/



int main()
{
    /// malloc reserva espacio en memoria, en el heap

    int* pNumero;

    //la funcion malloc devuelve puntero a void, se puede transformar a cualquier tipo de dato con un casteo
    //casteo lo que devuelve malloc al tipo de dato del puntero
    pNumero = (int*)malloc(sizeof(int));//le paso el sizeof del dato que quiero guardar

    //pNumero = (int*)calloc(sizeof(int),1);//inicializa en 0 los elementos, y le paso el tam que quiero y la cant de elementos
    *pNumero = 99;

    printf("Heap->pNumero: %d\n",pNumero);
    printf("Pila->&pNumero: %d\n",&pNumero);

    if(pNumero != NULL)
    {
        printf("Valor-> *pNumero: %d\n", *pNumero);

        printf("Luego de hacer free.\n");
        free(pNumero);//para liberar un puntero, y que lo pueda usar el SO
        printf("Heap->pNumero: %d\n",pNumero);
        printf("Pila->&pNumero: %d\n",&pNumero);
        printf("Valor-> *pNumero: %d\n", *pNumero);
    }

    return 0;
}
