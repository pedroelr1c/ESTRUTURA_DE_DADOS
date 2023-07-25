#include <stdio.h>
#include <stdlib.h>


typedef enum genero{
	
	masculino,
	feminino
	
}Genero;

typedef struct pessoa{
	
	char nome[40];
	int idade;
	Genero genero;
	
}Pessoa;


int main(void){
	
	Pessoa cadastro;
	//int opc;
	
	printf("DIGITE SEU NOME\n>> ");
	scanf(" %[^\n]",cadastro.nome);
	printf("DIGITE SUA IDADE\n>> ");
	scanf(" %d",&cadastro.idade);
	printf("QUAL SEU GENERO\n(0) MASCULINO\n(1) FEMININO\n>> ");
	scanf("%d",&cadastro.genero);
	
	
	printf("NOME: %s\n",cadastro.nome);
	printf("IDADE: %d\n",cadastro.idade);
	switch(cadastro.genero){
		case 0:
			printf("MASCULINO\n");
			break;
		case 1:
			printf("FEMENINO\n");
			break;
	}
	
	
	return 0;
}