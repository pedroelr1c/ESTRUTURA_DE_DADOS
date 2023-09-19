/*
Listas encadeadas são estruturas de dados que permitem armazenar uma coleção
 de elementos de um mesmo tipo.

Neste arquivo, temos a implementação de uma lista encadeada simples de inteiros.
*/

#include "lista.h"

struct lista // Criando a struct lista.
{
	int info; // Criando uma variável do tipo int que vai armazenar os dados. 
	struct lista *prox; // Criando um ponteiro prox que vai apontar para o poximo item da lista.
};

Lista *lst_cria(void) // Criando uma função que vai dar apontar aos elementos da lista.
{
	return NULL; // vai retrnar/inicializar a lista como NULL ou seja, vazio. 
}

Lista *lst_insere(Lista *l, int v) // Craindo uma função que vai inserir os dados na lista, tendo como parametro os ponteiros l e o int v.
{
	Lista *novo = (Lista *)malloc(sizeof(Lista)); // criando um vetor dinamico, do tipo lista, para armazenar a quantidade de elementos para o vetor.
	if (novo == NULL) // Se o novo vetor for igual a NULL ou seja, ele não existir, entar na comdição. 
	{
		printf("[ERRO] memoria insuficiente!");
		exit(1); // Se o vetor não existir o programa vai fechar.
	}
	novo->info = v; // O vetor novo vai passar o elemento da variável v para info da struct.
	novo->prox = l; // O vetor novo vai apontar para o primeriro endereço da lista, e vai fazer a substituição do no que ira "lincar" o ultimo elemento com ao proximo  
	return novo; // vai retornar a variável novo

	/* Ou para alterar diretamente

	void lst_insere(Lista** t, int v){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = v;
	novo->prox = *t;
	*t = novo; */
}

int lst_vazia(Lista *l) // Criando uma função que tem como parametro o tipo lista.
{
	return (l == NULL); // Vai retornar o ponteiro se for igual a NULL.
}

void lst_imprime(Lista *l) // Função que vai imprimir os dados da struct, passando struct lista (l) como parametro. 
{
	Lista *p; // Crinado um contador do tipo lista. 
	for (p = l; p != NULL; p = p->prox) // contador p vai receber l no laço de repetição, ate p ser diferente de NULL e p a cada repetição vai receber o endereço do proximo elemento da lista.
	{
		printf("\tInfo = %d \n", p->info); // Vai imprimir na tela os elementos da struct na variável info.
	}
}

Lista *lst_busca(int elemento, Lista *l) // Função que vai buscar na lista
{
	Lista *p;
	for (p = l; p != NULL; p = p->prox)
	{
		if (p->info == elemento)
			return p;
	}

	return NULL;
}

Lista *lst_retira(Lista *l, int v)
{
	Lista *ant = NULL; /* ponteiro para elemento anterior */
	Lista *p = l;	   /* ponteiro para percorrer a lista*/
	/* procura elemento na lista, guardando anterior */
	while (p->info != v)
	{
		if (p == NULL)
			return l; /* n�o achou: retorna lista original */
		ant = p;
		p = p->prox;
		/* verifica se achou elemento */
	}
	/* retira elemento */
	if (ant == NULL)
		/* retira elemento do inicio */
		l = p->prox;
	else
		/* retira elemento do meio da lista */
		ant->prox = p->prox;
	free(p);
	return l;
}

void lst_libera(Lista *l)
{
	Lista *p = l;
	Lista *t;
	while (p != NULL)
	{
		t = p->prox;
		free(p);
		p = t;
	}
}

Lista *lst_insere_ordenada(Lista *l, int v)
{
	Lista *novo;
	Lista *ant = NULL;
	Lista *p = l;
	while (p != NULL && p->info < v)
	{
		ant = p;
		p = p->prox;
	}
	novo = (Lista *)malloc(sizeof(Lista));
	novo->info = v;
	if (ant == NULL)
	{
		novo->prox = l;
		l = novo;
	}
	else
	{
		novo->prox = ant->prox;
		ant->prox = novo;
	}
	return l;
}

Lista *lst_ler_arquivo(char *nome_arquivo)
{
	FILE *arquivo;
	int valor;
	Lista *l = lst_cria();
	arquivo = fopen(nome_arquivo, "r");
	if (arquivo == NULL)
	{
		printf("Erro ao abrir o arquivo!\n");
		exit(1);
	}
	while (fscanf(arquivo, "%d", &valor) != EOF)
	{
		l = lst_insere(l, valor);
	}
	fclose(arquivo);
	return l;
}