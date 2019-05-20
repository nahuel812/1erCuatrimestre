#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3
typedef struct
{
    int numero;
    char letra;

}eDato;

int mostrarDatos(eDato*,int tDatos);
int ordenarPorLetra(eDato*,int tDatos);


int main()
{
    /*
    eDato unDato={1,'C'};
    eDato* pDato;//mi puntero a dato
    pDato = &unDato;//apunto el dato al puntero

    //printf("%d--%c\n",(*pDato).numero,(*pDato).letra);
    printf("%d--%c\n",pDato->numero,pDato->letra);// "->" accedo al dato de la struc
    */

    eDato listaDatos[TAM] = {{1,'C'},{1,'B'},{1,'A'}};
    eDato* pListaDatos;

    pListaDatos = listaDatos;

    mostrarDatos(pListaDatos,TAM);

    ordenarPorLetra(pListaDatos,TAM);

    printf("\nOrdenados\n");
    mostrarDatos(pListaDatos,TAM);


    return 0;
}


//fx muestra todos atravez de puntero
int mostrarDatos(eDato* pListaDatos, int tDatos)
{
    int estado=-1;
    int i;

    if(pListaDatos != NULL)
    {
        estado=0;

        for(i=0; i<tDatos; i++)
        {
            //printf("%d--%c\n",(*(pDato+i)).numero,(*(pDato+i)).letra);
            printf("%d--%c\n",(pListaDatos+i)->numero,(pListaDatos+i)->letra);
        }

    }
    else
    {
        printf("Es nulo");
    }
    return estado;
}

int ordenarPorLetra(eDato* pListaDatos,int tDatos)
{
    int estado=-1;
    int i,j;
    eDato AuxDato;

    if(pListaDatos != NULL)
    {
        for(i=0; i<tDatos-1 ; i++)
        {
            for(j=i+1; j<tDatos; j++)
            {
                if((pListaDatos+i)->letra > (pListaDatos+j)->letra)
                {
                    AuxDato = *(pListaDatos+i);
                    *(pListaDatos+i) = *(pListaDatos+j);
                    *(pListaDatos+j) = AuxDato;
                    estado=0;

                }
            }
        }
    }
    return estado;
}
