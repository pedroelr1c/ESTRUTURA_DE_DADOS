#include <stdio.h>
#include <stdlib.h>



typedef struct funcionario{
	
	char nome[40];
	float salario;
	char cargo[20];
	int identificador;
	
}funcionario;

typedef struct maior_menor{
	
	funcionario *m_n;
	
}maior_menor;

void imprimir(funcionario*registro);

int main(void){
	
	float maior_salario=0;
	char opc;
	int cont,re;
	funcionario *registro;	
	
	
	registro = (funcionario*)malloc(4*sizeof(funcionario)); 
	if(registro==NULL){
		printf("!!!ERRO DE ALOCACAO DE MEMORIA!!!\n");
		exit(-1);
	}
	
	
	for(cont=0;cont<4;cont++){
	
		printf("DIGITE SEU NOME\n>> ");
		scanf(" %[^\n]",registro[cont].nome);
	
		printf("DIGITE SEU SALARIO\n>> ");
		scanf("%f",&registro[cont].salario);
		
		printf("DIGITE SEU IDENTIFICADOR\n>> ");
		scanf(" %d",&registro[cont].identificador);
	
		printf("DIGITE SEU CARGO\n>> ");
		scanf(" %[^\n]",registro[cont].cargo);
		system("cls");
		
	}
	
	imprimir(registro);
	
	free(registro);
	
	return 0;
}


void imprimir(funcionario*registro){

	int c;
	
	printf("TODOS OS FUNCIONARIOS\n======================================\n");
	
	for(c=0;c<4;c++){
		printf("(%d) %s ",registro[c].identificador,registro[c].nome);
		printf("\nCARGO %s\nSALARIO %.2f\n",registro[c].cargo,registro[c].salario);
		printf("======================================\n");
	}
}
