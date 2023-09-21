#include "pilha.c"

int main(void){

    float n;
    int tamanho;
    char escolha;

    printf("INFORME O TAMANHO DO VETOR: ");
    scanf("%d",&tamanho);

    Pilha* p = pilha_cria(tamanho);

    do{
        printf("DIGITE UM NUMERO\n>> ");
        scanf("%f",&n);
        getchar();
        pilha_push(p,n,tamanho);
        printf("CONTINAR PREENCHENDO O VETOR? (S) SIM / (N) NAO\n");
        scanf("%c",&escolha);
        getchar();
    }while(escolha == 's');
    
    pilha_imprime(p);

    pilha_pop(p);

    pilha_libera(p);
   
    return 0;
}
