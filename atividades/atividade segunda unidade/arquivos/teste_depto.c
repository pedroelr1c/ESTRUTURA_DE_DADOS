#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
	
	char nome[20];
	float salario;
	char depto;
	int id;
	
}Funcionario;

void copiar(Funcionario**pessoal,int n){
	
	int c;
	
	for(c=0;c<n;c++){
	
		printf("DEPTO: ");
		scanf(" %c",&pessoal[c]->depto);
		printf("CODIGO DO DEPTO: ");
		scanf("%d",&pessoal[c]->id);
		printf("NOME DO FUNCIONARIO: ");
		scanf(" %[^\n]",pessoal[c]->nome);
		printf("SALARIO: ");
		scanf("%f",&pessoal[c]->salario);
	
	}
	
	for(c=0;c<n;c++) {
		printf("%c%d\t%s\t%c\t%f\n",pessoal[c]->depto,pessoal[c]->id,pessoal[c]->nome,pessoal[c]->depto,pessoal[c]->salario);
				
	}

	
}

int main(void){
	
	
	Funcionario**pessoal;	
	int n;
	
	printf("INFORME AQUANTIDADE DE FUNCIONARIOS A SER CADASTRADOS\n");
	scanf("%d",&n); 
	
	pessoal=(Funcionario**)malloc(n*sizeof(Funcionario*));// possivel erro.
	if(pessoal==NULL) {
		
		printf("!!!ERRO NA MENORIA!!!\n");
		exit(1);
		
	}
	
	
	copiar(pessoal,n);
	
	return 0;
}