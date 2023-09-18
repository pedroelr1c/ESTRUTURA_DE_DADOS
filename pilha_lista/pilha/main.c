#include "pilha.c"

int main(void){

    Pilha* p = pilha_cria();

    pilha_push(p, 1);
    pilha_push(p, 2);
    pilha_push(p, 3);
    pilha_push(p, 4);
    pilha_push(p, 5);
    pilha_push(p, 6);

    pilha_imprime(p);

    pilha_pop(p);

    pilha_libera(p);
   
    return 0;
}