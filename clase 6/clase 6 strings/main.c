#include <stdio.h>
#include <stdlib.h>

#include <string.h>//libreria para manejar strings

#define T 50

int main()
{
    char palabra[T]="Hola", otraPalabra[T];
    int len, comp;

    printf("\nIngrese una palabra: ");
    gets(palabra);//lee todo el string que ingresemos hasta el \0 (enter)

    //strcpy(palabra,otraPalabra);//copia en palabra la otra variable "otraPalabra"

    len = strlen(palabra);//devuelve la cantidad de caracteres de la cadena


    strlwr(palabra);//pasa todo el string a minuscula
    strupr(palabra);//pasa el string a mayuscula


    comp = stricmp(palabra,"Hola");//compara la primer variable con la segunda, si son iguales 0, si la primera es mayor 1 y si la primera es menor -1

    printf("\n%d", comp);

    printf("\nPalabra %s de largo %d\n", palabra, len);

    //strcat()//concatena dos strings

    return 0;
}
