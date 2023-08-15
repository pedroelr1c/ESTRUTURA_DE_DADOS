#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct contabancaria{
    
    char titular[40];
    int numero;
    float saldo;
 
}Conta;

// função para criar a struct com os dados da conta bancaria.
Conta*cad(char titular[40], int numero, float saldo);

// função para passar o valor do saldo para a conta.
void depositar(contabancaria*cad->saldo);

// função para retirar o valor do saldo atual.
void sacar(contabancaria*cad->saldo);