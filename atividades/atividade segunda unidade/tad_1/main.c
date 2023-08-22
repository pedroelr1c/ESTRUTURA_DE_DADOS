#include "contaBancaria.h"


int main(void) {

    char titular[40];
    int numero;
    float saldo;

    printf("DIGITE O NOME DA PESSOA\n>> ");
    scanf(" %[^\n]",&titular);
    printf("DIGITE O NUMERO DA CONTA\n>> ");
    scanf("%d",&numero);
    printf("DIGITE O SEU SALDO\n>> ");
    scanf("%f",&saldo);

    Conta*cad(char titular[40], int numero, float saldo);

}

//gcc -c contabancaria.c - meu arquivo objeto.
//gcc -c questão1.c - meu main.c.
//gcc -o questao - gerar o executavel
