
#include <stdlib.h>
#include "Empleado.h"

#define T 10


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
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar empleados con su sector\n5.Sector con sus empleados\n6.Total de sueldo por sector\n7.Sector con mas empleados\n8.Empleados con sueldo maximo y carlos que cobran mas de 20k\n0.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                altaEmpleado(listaEmpleados, T, sectores,3);
                break;
            case 2:
                borrarEmpleado(listaEmpleados,T,sectores,3);
                break;
            case 3:
                modificarEmpleado(listaEmpleados,T,sectores,3);
                break;
            case 4:
                mostrarListaEmpleados(listaEmpleados, T,sectores,3);
                break;
            case 5:
                mostrarSectorConSusEmpleados(listaEmpleados, T,sectores,3);
                break;
            case 6:
                totalDeSueldoPorSector(listaEmpleados,T,sectores,3);
                break;
            case 7:
                mostrarSectorConMasEmpleados(listaEmpleados,T,sectores,3);
                break;


            case 8:
                mostrarEmpleadosConSueldoMaximo(listaEmpleados,T,sectores,3);
                printf("\nCantidad de carlos cobran mas 20k: %d\n", contarCarlos(listaEmpleados,T));
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










