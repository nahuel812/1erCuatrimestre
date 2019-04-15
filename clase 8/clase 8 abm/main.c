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
    int legajoABorrar;

    inicializarEmpleados(lista,T);

    do
    {
        printf("1-Alta empleado");
        printf("\n2-Listar todos los empleados");
        printf("\n3-Baja de empleado");

        printf("\n0-Salir\n");
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

        case 3:
            mostrarTodos(lista,T);
            printf("\nIngrese el legajo del empleado a borrar: ");
            scanf("%d", &legajoABorrar);

            if(borrarUno(lista,T,legajoABorrar))
            {
                printf("\nEmpleado eliminado con exito.\n");
            }
            else
            {
                printf("\nNo se pudo eliminar al empleado.\n");
            }

            break;
/*
        case 4:

            system("pause");
            break;
*/
        case 0:
            printf("\nSaliendo del programa!\n");
            seguir = 'n';
            break;

        default:
            printf("\nNo ingreso una opcion valida!\n");
        }

        system("pause");
        system("cls");

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
            break;// break para que no siga buscando
        }
    }
    return retorno;
}



//por legajo
int buscarUno(eEmpleado lista[], int tam, int legajo)
{
    int retorno = -1;
    int i;

    for(i=0 ; i<tam ; i++)
    {
        if(lista[i].legajo == legajo)
        {
            retorno = i;
            break;
        }
    }

    return retorno;
}



int borrarUno(eEmpleado lista[],int tam,int legajo)
{
    int i;
    int indice;
    int retorno = 0;

    indice = buscarUno(lista,tam,legajo);

    if(indice != -1)
    {
        lista[indice].estado = LIBRE;
        retorno = 1;
    }
    return retorno;
}




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
        printf("\nNo hay espacio disponible.\n");
    }

}

void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("\n%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);
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

