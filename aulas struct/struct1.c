#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct diciplina{
	
	int nome[40];
	float nota;
	
}Diciplina;

typedef struct aluno{
	
	Diciplina diciplina;
	char nome[40];
	int matricula;
	
}Aluno;

int main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	int i_quant;//usar depois.
	
	Aluno * registro = (Aluno*)malloc(sizeof(Aluno));
	if(registro==NULL){
		printf("!!!ERRO NA ALOCAÇÃO DE MEMORIA!!!\n\n");
	}
	
	printf("DIGITE O NOME DO ALUNO\n>> ");
	scanf(" %[^\n]", registro->nome);
	printf("DIGITE A MATRICULA DO ALUNO\n>> ");
	scanf("%d",&registro->matricula);
	
	// outra forma de direcionar é usando a instrução "(*registro).nome" no lugar de "registro->nome"
	//scanf("%d",&(*registro).matricula);
	
	printf("DIGITE A DICIPLINA\n>> ");
	scanf(" %[^\n]",registro->diciplina.nome);
	
	system("cls");
	
	printf("DADOS DO ALUNO |  %s  | \n",registro->nome);
	printf("\nMATRICULA: %d\nDICIPLINA: %s",registro->matricula,registro->diciplina.nome);
	
	
	
	free(registro);
	
	return 0;
}