#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    FILE* pArchivo;

    int* x = (int*) malloc(sizeof(int));

    *x=4;

    //no necesita la extencion porque es binario
    pArchivo = fopen("datos.dat","wb");//escritura binario

    if(pArchivo != NULL)
    {
//4 param 1ro dir de memoria del dato a guardar,2do sizeof del tipo de dato,
//3ro cantidad de elementos especifico que quiero escribir
//4to dir del archivo
    fwrite(x,sizeof(int),1,pArchivo);

    fclose(pArchivo);
*/

    FILE* pArchivo;
    int* x = (int*) malloc(sizeof(int));

    pArchivo = fopen("datos.dat","rb");//rb read binary

    if(pArchivo!=NULL)
    {
        //recive lo msimo que fwrite
        fread(x,sizeof(int),1,pArchivo);

        fclose(pArchivo);

        printf("%d",*x);
    }


    return 0;
}
