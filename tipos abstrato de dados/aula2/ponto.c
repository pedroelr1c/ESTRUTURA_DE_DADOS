#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

void pto_libera(Ponto*p);

void pto_acessa(Ponto*p,float*x,float*y);

struct ponto{

    float x;
    float y;
}
    

    ponto*pto_criar (float x, float y){

        Ponto* p=(Ponto*)malloc(sizeof(Ponto));
        if (p==NULL){
            printf("MEMORIA INSUFICIENTE!\n");
            exit(1);
        }

        p->x=x;
        p->y=y;

        return p;

    }


void pto_libera(Ponto*p){

    free(p);
    
}

void pto_acessa(Ponto*p,float*x,float*y){

*x=p->x;
*y=p->y;

}

void pto_atribir(Ponto*p,float x,float y){

    p->x=x;
    p->y=y;

}

void pto_distancia(Ponto*p1,Ponto*p2){

    float dx+p2->x-p1->x;
    float dy+p2->y -p1->y;
    return sqtr(dx*dx+dy*dy);
}