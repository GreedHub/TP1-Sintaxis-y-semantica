#ifndef functions
#define functions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int LongitudCadena(char *cadena);
bool CadenaVacia(char *cadena);
char* Concatenar(char *primerCadena, char *segundaCadena);
char* InsertarCaractenEnPosicion(char *cadena, char caracter, int posicion);
char* EliminarCaracter(char *cadena, char caracter);
char* Subcadena(char *cadena, int posInicial, int posFinal);

#endif