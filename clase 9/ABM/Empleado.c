
#include "Empleado.h"


void cargarEmpleado(eEmpleado lista[], int tam)
{
    int indice;

    indice = buscarLibre(lista, tam);
    if(indice != -1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[indice].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[indice].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[indice].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[indice].sueldoBruto);

        lista[indice].sueldoNeto =lista[indice].sueldoBruto*0.85;

        lista[indice].estado = OCUPADO;
    }
    else
    {
        printf("No hay espacio");
    }
}

void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}

void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}

int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado == LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;

    //harcodeo de datos
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Maria","Pedro","Jose","Pedro","Pablo","Mateo"};
    char sexo[]= {'F','M','M','M','M','M'};
    float sueldosBruto[]= {1000,2000,3000,4000,5000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
    }
}

//por legajo
int buscarPorLegajo(eEmpleado lista[], int tam, int legajo)
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

int borrarEmpleado(eEmpleado lista[],int tam)
{
    int legajoBaja;
    int indiceBaja;
    int retorno = 0;

    mostrarListaEmpleados(lista,tam);
    printf("\nIngrese el legajo a dar de baja: ");
    scanf("%d",&legajoBaja);

    indiceBaja = buscarPorLegajo(lista,tam,legajoBaja);

    if(indiceBaja != -1)
    {
        //hacer confirmacion del dato a borrar

        lista[indiceBaja].estado = LIBRE;
        printf("\nEmpleado dado de baja con exito\n");
        retorno = 1;
    }
    else
    {
        printf("\nNo se puedo dar de baja el empleado\n");
    }
    return retorno;
}


int modificarEmpleado(eEmpleado lista[], int tam)
{
    int retorno = -1;
    int opcion;
    int legajoAModificar;
    int indiceAModificar;

    mostrarListaEmpleados(lista,tam);
    printf("\nIngrese el legajo del empleado a modificar: ");
    scanf("%d",&legajoAModificar);

    indiceAModificar = buscarPorLegajo(lista,tam,legajoAModificar);

    if(indiceAModificar != -1)
    {
        printf("\nEmpleado a modificar: \n");
        mostrarEmpleado(lista[indiceAModificar]);
        opcion = menuDeOpciones("\n1.Nombre\n2.Sexo\n3.Sueldo bruto\nElija una opcion: ");

        switch(opcion)
        {
        case 1:
            printf("\nIngrese el nuevo nombre: ");
            fflush(stdin);
            gets(lista[indiceAModificar].nombre);
            //validacion

            printf("\nDato modificado con exito.\n");
            retorno = 1;
            break;
        case 2:
            printf("\nIngrese el nuevo sexo: ");
            fflush(stdin);
            scanf("%c", &lista[indiceAModificar].sexo);
            //validacion

            printf("\nDato modificado con exito.\n");
            retorno = 1;
            break;
        case 3:
            printf("\nIngrese el nuevo sueldo bruto: ");
            scanf("%f", &lista[indiceAModificar].sueldoBruto);
            //validacion

            lista[indiceAModificar].sueldoNeto = lista[indiceAModificar].sueldoBruto*0.85;

            printf("\nDato modificado con exito.\n");
            retorno = 1;
            break;
        }
    }
    else
    {
        printf("\nNo existe empleado con el legajo ingresado\n");
    }

    return retorno;
}


