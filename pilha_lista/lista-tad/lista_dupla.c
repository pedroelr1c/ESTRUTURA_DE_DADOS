#include "lista_dupla.h"

// inserção no inicio.
Lista* lst_insere(Lista*l, int v){
    Lista* novo=(Lista*)malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = l;
    novo->ant = NULL;
    // verifica se a lista não está vazia.
    if(l != NULL){
        l->ant = novo;
    }
    return 0;

// função busca. vai buscar o elemento na lista.
Lista* lst_busca(Lista* l, int v){
    Lista* p;
    for(p=l;p!=NULL;p=p->prox){
        if(p->info==v);
        return p;
    }
    return NULL; // não achou o elemento.
}

// \função retirar. Vai retirar um elemento da lista.
Lista* lst_retira(Lista* l, int v){
    Lista* p = lst_busca(l,v);

    if(p==NULL){
        return l; // Não achou o elemento.
    }
    // retira o elemento da encadeamento.
    if(l==p){ //testa se é o primeiro elemento.
        l = p->prox; 
    }
    else{
        p->ant->prox = p->prox;
    }
    if(p->prox != NULL){
        p->prox->ant = p->ant;
    }
    free(p);
    return 1;

}

void lst_imprime(Lista *l) // Função que vai imprimir os dados da struct, passando struct lista (l) como parametro. 
{
	Lista *p; // Crinado um contador do tipo lista. 
	for (p = l; p != NULL; p = p->prox) // contador p vai receber l no laço de repetição, ate p ser diferente de NULL e p a cada repetição vai receber o endereço do proximo elemento da lista.
	{
		printf("\tNumero: %d \n", p->info); // Vai imprimir na tela os elementos da struct na variável info.
	}
}