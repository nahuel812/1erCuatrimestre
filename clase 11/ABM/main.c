
#include <stdlib.h>
#include "Empleado.h"

#define T 10

/*
agrear eSector
calcular el sueldo con los sectores
*/

int menuDeOpciones(char[]);


int main()
{
    int opcion;
    eEmpleado lista[T];
    eSector sectores[3] = {{1,"Contabilidad",100},{2,"Sistemas",200},{3, "RRHH", 150}};


    inicializarEmpleados(lista,T);
    hardcodearDatosEmpleados(lista,6);

    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n0.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                altaEmpleado(lista, T);
                break;
            case 2:
                borrarEmpleado(lista,T);
                break;
            case 3:
                modificarEmpleado(lista,T);
                break;
            case 4:
                mostrarListaEmpleados(lista, T,sectores,3);
                break;
            case 5:
                mostrarEmpleadosConSueldoMaximo(lista,T);
                printf("\nCantidad de carlos cobran mas 20k: %d\n", contarCarlos(lista,T));

                break;


            case 0:
                opcion = 0;
                printf("\nSaliendo del programa\n");
                break;
            default:
                printf("\nIngrese una opcion valida.\n");
        }
        system("pause");
        system("cls");
    }while(opcion!=0);

    return 0;
}










