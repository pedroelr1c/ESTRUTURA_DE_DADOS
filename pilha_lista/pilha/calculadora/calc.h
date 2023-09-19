
typedef struct calc Calc;

Calc* calc_criar(char* r);

void calc_operando(Calc* c, float v);

void calc_operador(Calc *c, char op);

void call-libera(Calc *);