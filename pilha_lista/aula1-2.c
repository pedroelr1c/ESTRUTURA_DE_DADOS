#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct frutas{
    char nome[10]; // Nome da fruta.
    struct frutas *proxima; // Endereço da proxima fruta.
};

struct  frutas * insere(struct frutas * fruta, char * nome){
    struct frutas*novafruta=(struct frutas*)malloc(sizeof(struct frutas));
    strcpy(novafruta->nome, nome);
    novafruta->proxima=fruta;
    return novafruta;
}

int main(void){
    struct frutas *lista=NULL;
    lista=insere(lista,"maca");
    lista=insere(lista,"abacate");
    lista=insere(lista,"uva");
    free(lista);
 
return 0; 
}