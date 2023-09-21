#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
    int n;
    float *vet;
};

Pilha* pilha_cria(int tam){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->vet = (float*)malloc(tam*sizeof(int)); // criando vetor dinâmico, junto com a criação da pilha.
    p->n=0; // Inicializa com zero elementos.
    return p;
}

void pilha_push(Pilha* p, float v, int tam){
    
	if(p->n==tam){ // capacidade esgotada.	
		int i=1; // Criando uma variável auxiliar para dafinir o novo tamanho do vetor.
		tam+=i; // somando o novo tamanho com o antigo. 
    	p->vet = (float*)realloc(p->vet,tam*sizeof(float)); // fazendo o realloc do novo tamanho do vetor.
        i++;
    }    
   
    // insere elementos na proxima posição livre.
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
