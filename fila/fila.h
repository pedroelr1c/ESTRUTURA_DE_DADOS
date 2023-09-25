
typedef struct fila Fila;

void menu();

// Criar fila.  
Fila *CriarFila(int MAX_SIZE);

void DestruirFila(Fila**Q);

int FilaVazia(Fila *Q);

int FilaCheia(Fila *Q);

int InsereFila(Fila *Q, int elem);

int removeFila(Fila *Q);

int ConsultaFila(Fila *Q, int *elem);

void ImprimiFila(Fila *Q);
