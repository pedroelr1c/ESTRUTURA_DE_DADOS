/*TAD: pilha de vetores reais*/

// renomeando a struct.
typedef struct pilha Pilha;

// criando a pilha, passando o tamanho do vetor.
Pilha* pilha_cria(int tam);

// coloca os elementos dentro do vetor.
void pilha_push(Pilha* p, float v, int tam);

float pilha_pop(Pilha* p);

int pilha_vazia(Pilha* p);

void pilha_libera(Pilha* p);
