#include "lista.c"
#include "pilha.h"

struct pilha{
    Lista* prim;
}

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
}

void pilha_push(Pilha* p, float v){
    Lista* n = (Lista*)malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->prim;
    n->prim = n;
}

/*compara se a pilah esta vazia*/
int pilha_vazia(Pilha* p){
    return (p->prim == NULL);
}

/*compara se o primeiro elemento da lista está vazia*/
float pilha_pop(Pilha* p){
    Lista* t;
    float v;
    if(pilha_vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    t= p->prim;
    v= t->info;
    p->prim = t->prox;
    free(t);
    return v;
}

void pilha_imprime(Pilha* p){

    int contador;
    // imprimindo os elementos do topo d vetor ate a base.
    for(contador = p->n-1;contador>=0;contador--){ // pegando o espaço do topo da pilha menos um, ate zero
        printf("%.2f ",p->vet[contador]);
        printf("\n");
    }

}




