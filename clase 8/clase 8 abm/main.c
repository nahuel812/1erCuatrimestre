#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3

//defino la estructura
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;

void cargarEmpleados(eEmpleado[], int tam);
void mostrarEmpleado(eEmpleado);
void mostrarTodos(eEmpleado[],int tam);


int main()
{
    eEmpleado lista[T];//creo un array de empleados llamado lista

    cargarEmpleados(lista,T);
    mostrarTodos(lista,T);

    return 0;
}

void cargarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("\nIngrese legajo: ");
        scanf("%d", &lista[i].legajo);

        printf("\nIngrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);

        printf("\nIngrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);

        printf("\nIngrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto = lista[i].sueldoBruto * 0.85;
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
        mostrarEmpleado(lista[i]);
    }
}


