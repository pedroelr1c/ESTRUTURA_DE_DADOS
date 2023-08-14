#include <stdio.h>
#include "ponto.h"

int main(void){

    Ponto*p=pto_criar(2.0.1.0);
    Ponto*q=pto_criar(3.4.2.1);
    float d pto_distancia(p,q);
    printf("DISTANCIA ENTRA PONTOS: %f\n,d");
    pto_libera(q);
    pto_libera(p);
    return 0;

}
