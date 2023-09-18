#include "pilha.c"

int main(void){

    float n;
    Pilha* p = pilha_cria();
    int contador;
    for(contador=0;contador<4;contador++){
        printf("DIGITE UM NUMERO\n>> ");
        scanf("%f",&n);
        getchar();
        pilha_push(p,n);
    }
    
    pilha_imprime(p);

    pilha_pop(p);

    pilha_libera(p);
   
    return 0;
}