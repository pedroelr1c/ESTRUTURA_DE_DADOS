#include <stdio.h>
#include <stdlib.h>

struct lista{
    
    int info;
    struct lista* ant;
    struct lista* prox;

};
 
typedef struct lista Lista;

Lista* lst_insere(Lista*l, int v);

Lista* lst_busca(Lista* l, int v);

Lista* lst_retira(Lista*l, int v);