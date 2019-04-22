#include <stdio.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

int menuDeOpciones(char[]);

void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);

void mostrarEmpleado(eEmpleado);
void mostrarListaEmpleados(eEmpleado[], int);

int buscarLibre(eEmpleado[], int);

void altaEmpleado(eEmpleado[], int);
int borrarEmpleado(eEmpleado[],int);
int modificarEmpleado(eEmpleado[], int);

void informarEmpleados(eEmpleado[],int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosConSueldoMaximo(eEmpleado[],int);
int contarCarlos(eEmpleado lista[], int tam);
