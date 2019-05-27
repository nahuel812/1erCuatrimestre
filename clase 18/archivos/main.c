#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* pArchivo;
    char nombre[20]="Nahuel";

    pArchivo = fopen("D:\\misDatos.txt","w");//abro el archivo
    //pArchivo = fopen("misDatos.txt","w");//se crea en el dir del proyec
    //lo uso
    if(pArchivo!=NULL)
    {
        fprintf(pArchivo,"Su nombre es: %s",nombre);//fprintf imprime en el archivo

        fclose(pArchivo);//cierro el archivo
    }


/*
    FILE* pArchivo;
    char nombre[20];

    pArchivo = fopen("D:\\misDatos.txt","r");
    if(pArchivo!=NULL)
    {

        fgets(nombre,30,pArchivo);//permite leer una linea del archivo y tomar algun dato
        fclose(pArchivo);

        printf("%s",nombre);
    }
*/
    return 0;
}
