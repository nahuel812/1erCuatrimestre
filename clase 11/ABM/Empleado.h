#include <stdio.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idSector;// pk
    char nombreSector[20];
    float valorHora;

}eSector;

typedef struct
{
    int legajo;// pk - primary key
    char nombre[20];
    char sexo;


    int idSector; //fk - foreing key
    int cantidadHoras;

    float sueldoBruto;
    float sueldoNeto;

    int estado;
} eEmpleado;

int menuDeOpciones(char[]);

void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);

void mostrarEmpleado(eEmpleado, eSector[], int ts);
void mostrarListaEmpleados(eEmpleado[], int tEmpleados, eSector[], int tSector);

int buscarLibre(eEmpleado[], int);

void altaEmpleado(eEmpleado listaEmpleados[], int tEmpleados, eSector sectores[],int tSector);
int borrarEmpleado(eEmpleado[],int);
int modificarEmpleado(eEmpleado[], int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosConSueldoMaximo(eEmpleado[],int);
int contarCarlos(eEmpleado lista[], int tam);
