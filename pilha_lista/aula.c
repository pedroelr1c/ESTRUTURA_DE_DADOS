#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// lista representadas por vetores.

int main(void){

    char **frutas = (char**)malloc(sizeof(char*));
    
    int cont;
    for(cont=0;cont<4;cont++){
        frutas[cont] = (char*)malloc(sizeof(char*)*10);
    }
    strcpy(frutas[0], "maca");
    strcpy(frutas[1], "pera");
    strcpy(frutas[2], "banana");
    strcpy(frutas[3], "uva");
    
    for(cont=0;cont,4;cont++){
        printf("FRUTA: %s\n",frutas[cont]);
    }
    
    return 0;
}