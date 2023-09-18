#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define N 50

struct pilha{
    int n;
    float vet[N];
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->n=0; // Inicializa com zero elementos.
    return p;
}

void pilha_push(Pilha* p, float v){
    if(p->n==N){ // capacidade esgotada.
        printf("CAPACIDADE DA PINHA ESTOUROU!\n");
        exit(1);
    }
    // insere elementos na próxima posição livre.
    p->vet[p->n] = v;
    p->n++;
}
// Função para verificar se a plha está vazia.
int pilha_vazia(Pilha* p){
    return (p->n==0);
}
// Função para retirar um elemento da pilha.
float pilha_pop(Pilha* p){
    float v;
    if(pilha_vazia(p)){
        printf("pilha vazia!\n");
        exit(1);
    }
    v=p->vet[p->n-1];
    p->n--;
    return v;
}

void pilha_libera(Pilha* p){
    free(p);
}

void pilha_imprime(Pilha* p){

    int contador;
    // imprimindo os elementos do topo d vetor ate a base.
    for(contador = p->n-1;contador>=0;contador--){ // pegando o espaço do topo da pilha menos um, ate zero
        printf("%.2f ",p->vet[contador]);
        printf("\n");
    }

}