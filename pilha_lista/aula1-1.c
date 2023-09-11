#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct frutas{
    char nome[10]; // Nome da fruta.
    struct frutas *proxima; // Endereço da proxima fruta.
}Listafrutas;

int main(void){

    Listafrutas*p;
    
    

    Listafrutas * fruta1=malloc(sizeof(Listafrutas));
    Listafrutas * fruta2=malloc(sizeof(Listafrutas));
    Listafrutas * fruta3=malloc(sizeof(Listafrutas));
    // Inicializar os nomes das frutas.
    strcpy(fruta1->nome, "banana");        
    strcpy(fruta2->nome, "pera");        
    strcpy(fruta3->nome, "uva");    
    // Faz o encadeamento dos espaços. 
    fruta1->proxima = fruta2;        
    fruta2->proxima = fruta3;        
    fruta3->proxima = NULL;   

    for(p=fruta1;p!=NULL;p=p->proxima){
        printf("FRUTAS: %s \n",p->nome );
    }

    return 0;
}