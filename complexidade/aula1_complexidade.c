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

    int i; // uma vez, c1
    int max = arr[0]; // uma vez, c2
    for(i=1; i<n; i++){ // n-1 vezes, onde não temos um valor definido para n é o laço vai ate o valor anterior de n (<), c3.
        if(arr[i] > max){ // n-1 vezes, c4
            max = arr[i]; // n-1 vez, c5
        }
    }
    return max; // uma vex, c6
}
/*

t(n)= c1+c2+c3+(n-1)+c4(n-1)+c5(n-1)+c6

t(n)= (c3+c4+c5)(n-1)+c1+c2+c6
       ~~~~~~~~       ~~~~~~~~ 
          a              b     

t(n)= a(n-1)+b       

Tipos de compleidade

    - Complexidade linear
    - Complexidade quadratica
    - Complexidade exp
    - Complexidade logaritima
    
*/

void insertionSort(int arr[],int n){
    int i, key, j; //  c1
    for(i=1;i<n;i++){ // n-1  c2 
        key=arr[i]; // n-1  c3
        j=i-1;// n-1  c4
        while(j>=0 && arr[j] > key){ // (n²-n)/2 vezes, c5
            arr[j+1] = arr[j]; // (n²-n)/2 vezes, c6
            j=j-1; // (n²-n)/2 c7
        }
        arr[j+1] = key; // n-1 c8
    }
}
/*

t(n) c5+c6+c7(n²-n)+c2+c3+c4+c8(n-1)+c1
     ~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~  ~~
            a              b         c

a(n²-n)/2 + b(n-1) + c

BIG O(n²)

*/

int main(void) { 

    return 0;
}