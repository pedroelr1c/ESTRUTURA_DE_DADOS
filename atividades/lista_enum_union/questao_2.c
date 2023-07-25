#include <stdio.h>
#include <stdlib.h>

typedef union tipo_p{
	
	char alimento;
	char bebida;
	char eletronico;
	
}Tipo_p;

typedef struct produto{

	char nome[40];
	float preco;
	Tipo_p tipo;	
	
}Produto;


int main(void){
	
	Produto cadastra;
	int opc;
	
	printf("INFORME NOME DO PRODUTO COMPRADO\n>> ");
	scanf(" %[^\n]",cadastra.nome);
	printf("INFORME O PRECO DO PRODUTO\n>> ");
	scanf("%f",&cadastra.preco);
	printf("INFORME O TIPO (CODIGO) DO PRODUTO\n(0) ALIMENTO\n(1) BEBIDA\n(2) ELETRONOCO\n");
	scanf("%d",&cadastra.tipo);
	
	
	
	
	printf("PRODUTO COMPRADO: %s\n",cadastra.nome);
	printf("PRECO DO PRODUTO: %.2f\n",cadastra.preco);
	
	printf("TIPO (CODIGO) DO PRODUTO: %d",cadastra.tipo);
		
	
	
	
	return 0;
}