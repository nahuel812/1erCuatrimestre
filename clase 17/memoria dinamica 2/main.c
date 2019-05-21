#include <stdio.h>
#include <stdlib.h>

#define T 5


int main()
{
    int* pNumeros;
    int i;
    int* pAux;
    pNumeros = (int*) malloc(sizeof(int)*T);//le pido el tamanio de un entero por 5.

    if(pNumeros != NULL)
    {
        for(i=0; i<T; i++)
        {
            //*(pNumeros+i) = i+1;
            printf("Ingrese un numero: ");
            scanf("%d", pNumeros+i);

        }
        printf("\nTENGO 5\n");
        for(i=0; i<T; i++)
        {
            printf("%d\n", *(pNumeros+i));
        }

        /// REALLOC//////////////////////////////////////////////////////////
        //recive 2 param, el puntero con los datos y luego el nuevo tamanio
        pAux = (int*)realloc(pNumeros, sizeof(int)*(T+5));//reasigna espacio en memoria al nuevo tamanio que le pido, si no encuentra consecutivo sigue buscando hasta encontrar consecutivos
        if(pAux != NULL)
        {
            pNumeros = pAux;
            if(pNumeros != NULL)
            {
                for(i=T; i<T+5; i++)
                {
                    printf("Ingrese un numero: ");
                    scanf("%d", pNumeros+i);
                }

                printf("\nTENGO 10\n");
                for(i=0; i<T+5; i++)
                {
                    printf("%d\n", *(pNumeros+i));
                }

                //realloc de 4
            }
        }
        else
        {
            printf("No se encontro espacio consecutivo.\n");
        }
    }

    return 0;
}
