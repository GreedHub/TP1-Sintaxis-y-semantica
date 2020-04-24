#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    //un caracter encerrado entre apóstrofes es un caracter constante
    //char car='a';
    char car=97;
    //caracter un byte, según código ASCII
    printf("%c  %d\n\n",car,car);
    //pueden utilizarse aritméticamente
    car++;
    printf("%c  %d\n\n",car,car);

    scanf("%c",&car);
    printf("%c  %d\n\n",car,car);

    //las cadenas son arrays unidimensionales, declaración tipo nombre[cantidad]
    //las cadenas terminan con \0

    fflush(stdin); //limpia el buffer
    char cadena[30+1];
    scanf("%s",cadena);
    //gets(cadena);
    printf("%s\n\n",cadena);
    //se puede inicializar un vector cuando se declara
    char cad[] = {'c','a','m','p','o','\0'};
    //printf("%s\n\n",cad);
    puts(cad);
    //mostrando caracter por caracter el primer elemento tiene subíndice 0
    i=0;
    while(cad[i]!='\0')
    {
        printf("%c\n\n",cad[i]);
        i++;
    }

    return 0;
}
