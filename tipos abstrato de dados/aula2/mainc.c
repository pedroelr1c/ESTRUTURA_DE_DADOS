/*TAD CIRCULO*/

#include "ponto.h"

typedef struct criculo Circulo;

Circulo*circ_criar(float x,float y,float r);
void circ_libera(Circulo*c);
float circ_area(Criculo*c);
int circ_intetior(Circulo*c,Ponto*p);
