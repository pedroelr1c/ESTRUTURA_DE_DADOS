#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
	
	char nome[20];
	float salario;
	char depto;
	int id;
	
}Funcionario;

void copiar_dados(FILE*fl,int n,Funcionario**pessoal);

void imprimir_folha_pagamentos(FILE*fl,int n,Funcionario**pessoal) {
	
	int c;
	
		for(c=0;c<n;c++) {
		fprintf(fl, "%c%d\t%s\t%c\t%.2f\n",pessoal[c]->depto,pessoal[c]->id,pessoal[c]->nome,pessoal[c]->depto,pessoal[c]->salario);
		
	//	fprintf(fl,"%d",pessoal[c]->nome);
		
	//	fprintf(fl,"%d/n%c%d/t%s/t%f",n,pessoal[c]->depto,pessoal[c]->id,pessoal[c]->nome,pessoal[c]->depto,pessoal[c]->salario);
		
	}
}
int main(void){
	
	
	FILE*fl;
	int n;
	Funcionario**pessoal;
	
	fl=fopen("funcionario.txt","w+");
	if(fl==NULL) {
		printf("!!!ARQUIVO DE DADOS NAO ENCONTRADO!!!\n");
		exit(1);
	}
	
	printf("ARQUIVO DE DADOS ENCONTRADO!\n");

	
	printf("INFORME AQUANTIDADE DE FUNCIONARIOS A SER CADASTRADOS\n");
	scanf("%d",&n); 
	
	pessoal=(Funcionario**)malloc(n*sizeof(Funcionario*));// possivel erro.
	if(pessoal==NULL) {
		
		printf("!!!ERRO NA MENORIA!!!\n");
		exit(1);
		
	}

	copiar_dados(fl,n,pessoal);

	imprimir_folha_pagamentos(fl,n,pessoal);

	fclose(fl);

	return 0;
}
void copiar_dados(FILE*fl,int n,Funcionario**pessoal){
	
	int c;
	
	for(c=0;c<n;c++){
	
	//	scanf(" %[^\n]",pessoal[c]->nome);
	
	//	scanf("%c %d %s %f",&pessoal[c]->depto,&pessoal[c]->id,pessoal[c]->nome,&pessoal[c]->salario);
		
		scanf(" %c",&pessoal[c]->depto);
		scanf("%d",&pessoal[c]->id);
		scanf(" %[^\n]",pessoal[c]->nome);
		scanf("%f",&pessoal[c]->salario);
	
	}
	
}
