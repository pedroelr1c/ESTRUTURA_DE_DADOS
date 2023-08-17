#include <stdio.h>
#include <stdlib.h>
#include "contaBancaria.h"


typedef struct contabancaria{
    
    char titular[40];
    int numero;
    float saldo;
 
}Conta;

Conta*cad(char titular[40], int numero, float saldo){
    Conta*cad=(Conta*)malloc(sizeof(Conta));
    if(cad==NULL){
        printf("\t\t!!ERRO!!\nTENTE MAIS TARDE\n");
        exit(1);
    }

    cad->numero=numero;
    cad->saldo=saldo;
    strcpy(cad->titular,titular);// copiar uma string.

    return cad;
}

void depositar(contabancaria*cad->saldo){

    printf("DIGITE O NOVO SALDO DA CONTA\n>> ");
    scanf("%f",&cad->saldo);

}

void sacar(contabancaria*cad->saldo){

    float saque;

    printf("INFORME O VAKOR A SER SACADO DA CONTA\nSEU SALDO ATUAL: %.2f\n>> ",cad->saldo);
    scanf("%f",&cad->saque);
    if(saque>saldo){
        printf("SAQUE INVALIDO!!\n");
    }else{
        cad->saldo-=saque;
    }

}