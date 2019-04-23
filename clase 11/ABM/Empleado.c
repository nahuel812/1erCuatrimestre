
#include "Empleado.h"

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
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
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]= {1,2,3,1,2,2};

    int horas[]= {20,50,30,25,20,40};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];

        lista[i].idSector = sector[i];
        lista[i].cantidadHoras = horas[i];

        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
    }
}

void mostrarListaEmpleados(eEmpleado lista[], int tEmpleados, eSector sectores[], int tSector)
{
    int i;
    for(i=0; i<tEmpleados; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i],sectores,tSector);
        }
    }
}

void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int tSector)
{
    char nombreSector[20];
    int i;

    //para mostrar el nombre del sector
    for(i=0; i<tSector; i++)
    {
        if(unEmpleado.idSector == sectores[i].idSector)
        {
            strcpy(nombreSector, sectores[i].nombreSector);
            break;
        }
    }
    printf("%4d %10s %c  %4f    %4f    %10s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo,unEmpleado.sueldoBruto,unEmpleado.sueldoNeto,nombreSector);

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

void altaEmpleado(eEmpleado listaEmpleados[], int tEmpleados, eSector listaSectores[],int tSector)
{
    int indice;
    int i;
    float valorHoraSector;

    indice = buscarLibre(listaEmpleados, tEmpleados);
    if(indice != -1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &listaEmpleados[indice].legajo);
        //validar legajo
        printf("\nIngrese nombre: ");
        fflush(stdin);
        gets(listaEmpleados[indice].nombre);
        printf("\nIngrese sexo: ");
        fflush(stdin);
        scanf("%c", &listaEmpleados[indice].sexo);

        printf("\nIngrese sector: \n");


        //buscarIdSector - funcion que devuelva la aestructura.
        for(i=0; i<tSector; i++)
        {
            printf("%d. %s \n",listaSectores[i].idSector, listaSectores[i].nombreSector);
        }
        printf("Elija una opcion: ");
        scanf("%d", &listaEmpleados[indice].idSector);


        //pedir horas
        printf("\nIngrese cantidad de horas: ");
        scanf("%d", &listaEmpleados[indice].cantidadHoras);
        for(i=0; i<tSector; i++)
        {
            if(listaEmpleados[indice].idSector == listaSectores[i].idSector)
            {
                valorHoraSector = listaSectores[i].valorHora;
                break;
            }
        }

        listaEmpleados[indice].sueldoBruto = valorHoraSector * listaEmpleados[indice].cantidadHoras;
        listaEmpleados[indice].sueldoNeto = listaEmpleados[indice].sueldoBruto * 0.85;


        listaEmpleados[indice].estado = OCUPADO;
    }
    else
    {
        printf("\nNo hay espacio\n");
    }
}

int borrarEmpleado(eEmpleado lista[],int tam)
{
    int legajoBaja;
    int indiceBaja;
    int retorno = 0;

    //mostrarListaEmpleados(lista,tam);
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

    //mostrarListaEmpleados(lista,tam);
    printf("\nIngrese el legajo del empleado a modificar: ");
    scanf("%d",&legajoAModificar);

    indiceAModificar = buscarPorLegajo(lista,tam,legajoAModificar);

    if(indiceAModificar != -1 && lista[indiceAModificar].estado == OCUPADO)
    {
        printf("\nEmpleado a modificar: \n");
        //mostrarEmpleado(lista[indiceAModificar]);
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


//BUSCAR EL maximo y devuelva el maximo y otra q busque entre los maixmos
//1er fx importe maximo - devuelve

float buscarSueldoMaximo(eEmpleado lista[],int tam)//devuelve el sueldo maximo entre los empleados
{
    int i;
    int flag = 0;
    float sueldoMaximo = 0;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado == OCUPADO)
        {
            if(flag == 0 || lista[i].sueldoBruto > sueldoMaximo)
            {
                sueldoMaximo = lista[i].sueldoBruto;
                flag = 1;
            }
        }

    }

    return sueldoMaximo;
}



void mostrarEmpleadosConSueldoMaximo(eEmpleado lista[],int tam)
{
    int i;
    float sueldoMaximo;

    sueldoMaximo = buscarSueldoMaximo(lista,tam);

    printf("Cobran sueldo maximo: \n");
    for(i=0; i<tam; i++)
    {
        if(lista[i].sueldoBruto == sueldoMaximo && lista[i].estado == OCUPADO)
        {
            //mostrarEmpleado(lista[i]);
        }
    }
}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos=0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado == OCUPADO)
        {
            if(stricmp(lista[i].nombre, "carlos")==0 && lista[i].sueldoBruto>=20000 )
            {
                contadorCarlos++;
            }
        }
    }
    return contadorCarlos;
}

eSector buscarSectorPorId(eSector listaSectores[],int tSector ,int idSector)
{
    int i;
    eSector sectorBuscado;

    for(i=0;i<tSector;i++)
    {
        if(idSector == listaSectores[i].idSector)
        {
            sectorBuscado = listaSectores[i];
            break;
        }
    }
    return sectorBuscado;
}

/*
void mostrarSectorConSusEmpleados(eEmpleado listaEmpleados[],int tEmpleado,eSector listaSectores[],int tSector)
{
    int i;
    int j;

    for(i=0;i<tSector;i++)
    {
        printf("%d %5s \n",listaSectores[i].idSector,listaSectores[i].nombreSector);
        for(j=0;j<tEmpleado;j++)
        {
            if(listaEmpleados[i].estado == OCUPADO)
            {
                printf("%d %5s \n",listaEmpleados[j].legajo,listaEmpleados[j].nombre);
            }
        }
    }
}
*/

