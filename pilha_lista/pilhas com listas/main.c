#include "pilha.c"

int main(void){

    Pilha* p = pilha_cria();

    pilha_vazia(p);

    pilha_push(p,1);
    pilha_push(p,2);
    pilha_push(p,3);
    pilha_push(p,4);
    pilha_push(p,5);

    pilha_pop(p);


    return 0;
}