#include <stdio.h>
#include <stdlib.h>

// definição do enum genero com as constantes "masculino" e "feminino".

typedef enum genero{
	
	masculino,
	feminino
	
}Genero;

// criando uma estrutura onde ser acadastrado os dados.

typedef struct pessoa{
	
	char nome[40];
	int idade;
	Genero genero;
	
}Pessoa;


int main(void){
	
	Pessoa cadastro;

	// pedindo para o usuario cadastra os dados que sera armazenado dentro da estrutura.
	
	printf("DIGITE SEU NOME\n>> ");
	scanf(" %[^\n]",cadastro.nome);
	printf("DIGITE SUA IDADE\n>> ");
	scanf(" %d",&cadastro.idade);
	printf("QUAL SEU GENERO\n(0) MASCULINO\n(1) FEMININO\n>> ");
	scanf("%d",&cadastro.genero);
	
	// imprimindo os dados.
	printf("NOME: %s\n",cadastro.nome);
	printf("IDADE: %d\n",cadastro.idade);
	switch(cadastro.genero){ //fazendo uma verificação se o genero é 0 (masculino) ou 1 (feminino)
		case 0:
			printf("MASCULINO\n");
			break;
		case 1:
			printf("FEMENINO\n");
			break;
	}
	
	
	return 0;
}
