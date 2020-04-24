#include "functions.h"

int LongitudCadena(char *cadena){
    int counter = 0;
    while(cadena[counter]!= '\0'){
        counter ++;
    }
    return counter;
}

bool CadenaVacia(char *cadena){
    return LongitudCadena(cadena) == 0;
}

char* Concatenar(char *primerCadena, char *segundaCadena){
    char *concatenado;
    concatenado = malloc(LongitudCadena(primerCadena) + LongitudCadena(segundaCadena) + 1);
    memcpy(concatenado, primerCadena, sizeof(primerCadena));
    memcpy(concatenado + LongitudCadena(primerCadena), segundaCadena, LongitudCadena(segundaCadena)+1);
    return concatenado;
}

char* InsertarCaractenEnPosicion(char *cadena, char caracter, int posicion){

    char *resultado;
    resultado = malloc( LongitudCadena(cadena) + 2);

    memcpy( resultado, cadena, posicion -1);
    memcpy( resultado + posicion -1, &caracter, 1);
    memcpy( resultado + posicion, cadena + posicion -1, LongitudCadena(cadena)-posicion+2);

    return resultado;

}

char* EliminarCaracter(char *cadena, char caracter){
    int counter = 0,posicion=0;
    char *resultado;
    resultado = malloc( LongitudCadena(cadena) + 1);

    while(cadena[counter]!= '\0'){
        if(cadena[counter]!=caracter){
            memcpy(resultado+posicion,&cadena[counter],1);
            posicion ++;
        }
        counter ++;
    }
    return resultado;
}

char* Subcadena(char *cadena, int posInicial, int posFinal){

    char *resultado;
    resultado = malloc( posFinal - posInicial + 2);

    for(int i = posInicial-1; i < posFinal; i++){
        memcpy(resultado+1+(i-posInicial),&cadena[i],1);
    } 

    return resultado;
}
