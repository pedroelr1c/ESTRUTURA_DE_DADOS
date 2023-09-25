#include "fila.c"

int main(void){

    int tam,contador,num,escolha;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tam);
    Fila *Q = CriarFila(tam);

do{
    menu();
    scanf("%d",&escolha);
    switch(escolha){
        case 1:
            if(FilaCheia(Q)){
                printf("\t!ERRO!\nFila esta cheia!\n");
            }else{
                for(contador=0;contador<tam;contador++){
                    printf("DIGITE O NUMERO %d\n>> ", contador+1);
                    scanf("%d", &num);
                    InsereFila(Q, num);
                }
            }
        break;
        case 2:
            if(FilaVazia(Q)){
                printf("\t!ERRO!\n   Fila esta vazia\n");
            }else{
            ImprimiFila(Q);
            }
        break;
        case 3:
            printf("SAINDO...\n");
            DestruirFila(&Q);
        break;
            
    }
    
}while(escolha!=3);
    
 
    return 0;
}