#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila{
    int ini, fim; 
    int qtde; // num de elementos da fila.
    int MAX_SIZE; // tamanho maximo da fila
    int *val; // vetor dos valores.
};


void menu(){

    printf("(1) Inserir dados no vetor\n(2) Imprimir vetor\n(3) Sair\n");

}

Fila *CriarFila(int MAX_SIZE){
    Fila *Q = (Fila*)calloc(1, sizeof(Fila));

    Q->val = (int*)calloc(MAX_SIZE, sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->qtde = 0;
    Q-> ini = Q->fim = 0;
    return Q;
}

void DestruirFila(Fila**Q){
    Fila *Qaux = *Q;
    free(Qaux->val); // desaloca o vetor de int.
    free(Qaux);
    *Q =NULL;
}

int FilaVazia(Fila *Q){
    return(Q->qtde == 0);
}
int FilaCheia(Fila *Q){
    return (Q->qtde == Q->MAX_SIZE);
}

int InsereFila(Fila *Q, int elem){
    if(FilaCheia(Q)){
        printf("\t!ERRO!\nFila esta cheia!");
        return 0;
    }else{
        Q->val[Q->fim] = elem;
        Q->fim = (Q->fim+1) % Q->MAX_SIZE;
        Q->qtde++;
        return 1;
    }
}

int removeFila(Fila *Q){
    if(FilaVazia(Q)){
        printf("\t!ERRO!\nFila esta vazia\n");
        return 0;
    }else{
        Q->ini =(Q->ini+1) % Q->MAX_SIZE;
        Q->qtde--;
        return 0;
    }
}

int ConsultaFila(Fila *Q, int *elem){
    if(FilaVazia(Q)){
        printf("\t!ERRO!\nFila esta vazia\n");
        return 0;
    }else{
        *elem = Q->val[Q->ini];
        return 1;
    }
}

void ImprimiFila(Fila *Q){
    int contador;
    for(contador=0;contador<Q->MAX_SIZE;contador++){
        printf("%d ",Q->val[contador]);
        printf("\n");
    }

}

