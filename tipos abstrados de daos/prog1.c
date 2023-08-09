#include <stdio.h>
#include "str.h"


//prototicos
    int comprimento(char*str);
    void copia(char*dest, char* orig);
    void copiar(char* dest, char* orig);
    void concatena(char* dest, char* orig );

    int main(void) {

        char str[101],str1[51],str2[51];

        printf("DIGITE UMA SEGUENCIA DA CARACTERES:\n>> ");
        scanf("%50[^\n]",str1);
        printf("DIGITE OUTRA SEQUINCIA DE CARATERES\n>> ");
        scanf("%50[^\n]",str2);
        copiar(str,str1);
        concatena(str,str2);
        printf("COMPRIMENTO DA CONCATENA: %d \n",comprimento(str));

        return 0;

        // coamndo para rodar arquivos saparados
      
        /*
        

        gcc -c str.c
        gcc -c prog1.c
        gcc -c prog.exe str.o prog.o
        
        */

        // str.h arquivo que age como cabeçalho com a documentação do arquivo 
        // str.o modulo do tipo binario
        // str.c arquivo com a base dos codigos a ser lincado no programa principal
        // prog1.c progama que ira contar o main

    }