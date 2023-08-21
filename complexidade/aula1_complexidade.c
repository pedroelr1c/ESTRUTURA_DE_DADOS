#include <stdio.h>
#include <stdlib.h>

/*
Aula 1 - Complexidade

Oque é uma algoritimo?

    Sequência finita de instruções bem definidas e não ambíguas, cada uma das quais devendo ser     
    executadas em um intervalo de tempo finito e com uma quantidade de esforço finita.

    Onde um algoritomo possui uma entrada e uma saída, onde no meio temos o algoritimo que ira 
    resolver um problema computacional.

Complexidade:

    Aquele que resolve o problema com a menor
    complexidade e a maior eficiência possível!

Simplicidade

Eficiência
    
    Tempo e espaço

Complxidade de espaço

        O espaço requerido por um algoritimo depende de dois componentes:
            - Uma parte fixa que é independdente das caracteristicas de entradas/saidas.
            - Uma parte variável que é dependente dainstância do problema sendo resolvido.


Complexidade de tempo
        O tempo de execução numa determinada entrada, é o número de operações primitivas executadas.
            - Operações primitivas: atribuições, comparações, soma, etc...
            - Cada linha do pseudocódigo requer tempo constante para ser
executado (independente do tamanho do input).
            - Linhas diferentes podem requerer tempos diferentes.
            - O tempo total é a soma dos tempos de cada linha do algoritmo.


*/

// analise de complexidade

int Max(int arr[], int n){

    int i; 
    int max = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}




int main(void) {
    
    
    

    return 0;
}