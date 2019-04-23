
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
    eEmpleado listaEmpleados[T];
    eSector sectores[3] = {{1,"Contabilidad",100},{2,"Sistemas",200},{3, "RRHH", 150}};

    inicializarEmpleados(listaEmpleados,T);
    hardcodearDatosEmpleados(listaEmpleados,6);

    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n6.Mostrar sector con sus empleados\n0.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                altaEmpleado(listaEmpleados, T, sectores,3);
                break;
            case 2:
                borrarEmpleado(listaEmpleados,T);
                break;
            case 3:
                modificarEmpleado(listaEmpleados,T);
                break;
            case 4:
                mostrarListaEmpleados(listaEmpleados, T,sectores,3);
                break;
            case 5:
                mostrarEmpleadosConSueldoMaximo(listaEmpleados,T);
                printf("\nCantidad de carlos cobran mas 20k: %d\n", contarCarlos(listaEmpleados,T));

                break;
            case 6:
                mostrarSectorConSusEmpleados(listaEmpleados, T,sectores,3);
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










