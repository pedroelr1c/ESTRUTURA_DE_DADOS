
// TAD ponto (x,y)

// tipo exportado
typedef struct ponto Ponto;

// função exportada
*Ponto pto_criar(float x, float y);
void pto_libera(Ponto*p);
void pto_acessa(Ponto*p,float*x,float*y);
void pto_atribuir(Ponto*p,float *x, float *y,);
float pto_distancia(Ponto p1, Ponto p2);