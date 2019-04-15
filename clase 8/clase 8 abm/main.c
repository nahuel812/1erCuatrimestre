#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3
#define OCUPADO 1
#define LIBRE 0


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;


void inicializarEmpleados(eEmpleado[],int);
int buscarLibre(eEmpleado[],int);
int buscarUno(eEmpleado[],int,int);
int borrarUno(eEmpleado[],int,int);

void cargarUnEmpleado(eEmpleado[], int tam);
void mostrarEmpleado(eEmpleado);
void mostrarTodos(eEmpleado[],int tam);



int main()
{
    eEmpleado lista[T];//creo un array de empleados llamado lista
    int opcion;
    char seguir = 's';

    inicializarEmpleados(lista,T);

    do
    {
        printf("1-Cargar empleados");
        printf("\n2-Listar todos los empleados");

        printf("\n5-Salir\n");
        printf("\nElija una opcion: ");

        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            cargarUnEmpleado(lista,T);
            break;

        case 2:
            mostrarTodos(lista,T);
            break;
/*
        case 3:

            system("pause");
            break;

        case 4:

            system("pause");
            break;
*/
        case 5:
            printf("\nSaliendo del programa!\n");
            seguir = 'n';
            break;

        default:
            printf("\nNo ingreso una opcion valida!\n");
        }
/*
        system("pause");
        system("cls");
*/
    }while(seguir == 's');

    return 0;
}


void inicializarEmpleados(eEmpleado lista[],int tam)
{
    int i;
    for(i=0; i<tam ; i++)
    {
        lista[i].estado = LIBRE;
    }
}

int buscarLibre(eEmpleado lista[],int tam)
{
    int i;
    int retorno = -1;//-1 si no hay lugar libre

    for(i=0; i<tam ; i++)
    {
        if(lista[i].estado == LIBRE)
        {
            retorno = i;//el indice si encontro libre
        }
    }
    return retorno;
}
/*
int buscarUno(eEmpleado lista[], int tam, int indice)
{




}


int borrarUno(eEmpleado lista[],int tam,int legajo)
{


}
*/



void cargarUnEmpleado(eEmpleado lista[], int tam)
{
    int indice;

    indice = buscarLibre(lista,tam);

    if(indice != -1)
    {
        printf("\nIngrese legajo: ");
        scanf("%d", &lista[indice].legajo);

        printf("\nIngrese nombre: ");
        fflush(stdin);
        gets(lista[indice].nombre);

        printf("\nIngrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[indice].sexo);

        printf("\nIngrese sueldo bruto: ");
        scanf("%f", &lista[indice].sueldoBruto);

        lista[indice].sueldoNeto = lista[indice].sueldoBruto * 0.85;

        lista[indice].estado = OCUPADO;
    }
    else
    {
        printf("\nNo hay espacio\n");
    }

}

void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("\n%d-%s-%c-%f-%f\n\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);
}

void mostrarTodos(eEmpleado lista[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado == OCUPADO)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}






/*
 fx pedir datos


int getString(char* entrada, char* mensaje, char* mensajeError, int lowLimit, int hiLimit)
{
    char buffer[500];

    printf("Ingrese %s:",mensaje);
    gets(buffer);

    //VALIDACION DE LARGO DE CADENA
    while(strlen(buffer) < lowLimit && strlen(buffer) > hiLimit)
    {
        printf("s")
    }

}
*/

