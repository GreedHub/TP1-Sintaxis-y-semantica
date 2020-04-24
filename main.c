#include "main.h"

void PrintMenu(){
    printf("Seleccione la funcion a testear: \n");
    printf("1) Longitud de la cadena \n");
    printf("2) Verificar si una cadena esta vacia \n");
    printf("3) Concatenar dos cadenas \n");
    printf("4) Insertar un caracter en la posicion \n");
    printf("5) Eliminar caracteres \n");
    printf("6) Generar una subcadena \n");
    printf("♦) Salir \n \n");
    printf("Seleccion: ");
}

void TestLongitudCadena(){

    char *cadena;
    char *cadena2;
    int  longitud;
    cadena = malloc(sizeof(char)*100);
    
    printf("Ingrese una cadena de caracteres: ");
    fgets (cadena, 100, stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    longitud = LongitudCadena(cadena);

    printf("\nLa longitud de la cadena es: %d",longitud);
    printf("\n\nPresione una tecla para continuar...");
    fgetc(stdin);

    return;
}

void TestCadenaVacia(){
    char *cadena;
    bool estaVacia;
    cadena = malloc(sizeof(char)*100);
    
    printf("Ingrese una cadena de caracteres: ");
    fgets (cadena, 100, stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    estaVacia = CadenaVacia(cadena);

    if(estaVacia){
        printf("\nLa cadena de caracteres esta vacia");
    }else{
        printf("\nLa cadena de caracteres no esta vacia");
    }

    printf("\n\nPresione una tecla para continuar...");
    fgetc(stdin);

    return;
}

void TestConcatenar(){

    char *cadena;
    char *cadena2;
    char *concatenado;
    cadena = malloc(sizeof(char)*100);
    cadena2 = malloc(sizeof(char)*100);
    
    printf("Ingrese la primer cadena de caracteres: ");
    fgets (cadena, 100, stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    printf("Ingrese la segunda cadena de caracteres: ");
    fgets(cadena2, 100, stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0';

    concatenado = Concatenar(cadena,cadena2);

    printf("\nEl resultaod de la concatenacion es: %s",concatenado);
    
    printf("\n\nPresione una tecla para continuar...");
    fgetc(stdin);

    return;
}

void TestInsertarCaractenEnPosicion(){
    char *cadena;
    char *resultado;
    char caracter;
    int posicion;
    cadena = malloc(sizeof(char)*100);
    
    printf("Ingrese una cadena de caracteres: ");
    fgets (cadena, 100, stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    printf("Ingrese el caracter a insertar: ");
    scanf("%c",&caracter);
    fgetc(stdin);

    printf("Ingrese el la posicion en la que desea insertar el caracter: ");
    scanf("%d",&posicion);
    fgetc(stdin);

    resultado = InsertarCaractenEnPosicion(cadena,caracter,posicion);

    printf("\nEl resultado de la insercion es: %s",resultado);    
    printf("\n\nPresione una tecla para continuar...");
    fgetc(stdin);

    return;
}

void TestEliminarCaracter(){
    char *cadena;
    char *resultado;
    char caracter;
    cadena = malloc(sizeof(char)*100);
    
    printf("Ingrese una cadena de caracteres: ");
    fgets (cadena, 100, stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    printf("Ingrese el caracter a eliminar: ");
    scanf("%c",&caracter);
    fgetc(stdin);

    resultado = EliminarCaracter(cadena,caracter);

    printf("\nEl resultado de la eliminacioón es: %s",resultado);    
    printf("\n\nPresione una tecla para continuar...");
    fgetc(stdin);

    return;
}

void TestSubcadena(){
    char *cadena;
    char *resultado;
    int posInicial;
    int posFinal;
    cadena = malloc(sizeof(char)*100);
    
    printf("Ingrese una cadena de caracteres: ");
    fgets (cadena, 100, stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    printf("Ingrese el la posicion inicial de la subcadena: ");
    scanf("%d",&posInicial);
    fgetc(stdin);

    printf("Ingrese el la posicion final de la subcadena: ");
    scanf("%d",&posFinal);
    fgetc(stdin);

    resultado = Subcadena(cadena,posInicial,posFinal);

    printf("\nLa subcadena es: %s",resultado);    
    printf("\n\nPresione una tecla para continuar...");
    fgetc(stdin);

    return;
}

int main(){
    char seleccion;
    bool continueLooping = true;

    while(continueLooping){

        system("clear"); 
        PrintMenu();
        scanf("%c", &seleccion);
        fgetc(stdin);
        system("clear"); 
        switch (seleccion){

            case '1':
                TestLongitudCadena();
                break;

            case '2':
                TestCadenaVacia();
                break;

            case '3':
                TestConcatenar();
                break;

            case '4':
                TestInsertarCaractenEnPosicion();
                break;

            case '5':
                TestEliminarCaracter();
                break;

            case '6':
                TestSubcadena();
                break;
            
            default:
                continueLooping = false;
                break;
        }
    }

    return 0;
}


