#include <stdio.h>
#include <stdlib.h>



typedef struct dados {

    char nome[40];
    int idade;
    int codigo;

}Dados;


void menu(Dados*cad);

void cadastro(Dados*cad);

void lista_dados(Dados*cad); 