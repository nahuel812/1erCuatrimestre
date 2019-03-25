#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);//va a pedir un numero, si no esta entre 0 y 10 lo retorna.
float sacarPromedio(int suma, int cantidad);//saca promeio
int aprobarMateria(int notaMinima, int nota);//0 si desaprobo - 1 si aprobo

void ejercicioUno(void);

int main()
{
    /*
    int valor;
    valor = pedirNota();

    printf("\nNota ingresada: %d\n",valor);
    */

    /*
    float promedio;
    promedio = sacarPromedio(15,2);
    printf("Promedio: %.1f",promedio);
    */

/*
    int valorUno;
    int valorDos;
    valorUno = aprobarMateria(6,2);// 0
    valorDos = aprobarMateria(6,8);// 1

    printf("%d",valorUno);
    printf("\n%d",valorDos);
*/

    //ejercicioUno();

    return 0;
}


int pedirNota(void)
{
    int nota;

    do
    {
        printf("\nIngrese una nota entre 0 y 10: ");
        scanf("%d",&nota);

    }while(nota<0 || nota>10);
    return nota;
}

float sacarPromedio(int suma, int cantidad)
{
    float resultado;

    resultado = (float)suma/cantidad;//casteo

    return resultado;
}

//    0 no aprobo -    1 si aprobo
int aprobarMateria(int notaMinima, int nota)
{
    int retorno;
    if(nota>=notaMinima)
    {
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }
    return retorno;
}


/*
5 notas
cantidad de aprobados
promedio de notas de aprobados
promedio de notas de no aprobados

contadores,acumuladores
*/

/*
void ejercicioUno(void)
{
    int notaUno;
    int notaDos;
    int notaTres;
    int notaCuatro;
    int notaCinco;

    notaUno = pedirNota();
    notaDos = pedirNota();
    notaTres = pedirNota();
    notaCuatro = pedirNota();
    notaCinco = pedirNota();

    aprobarMateria();
}*/
