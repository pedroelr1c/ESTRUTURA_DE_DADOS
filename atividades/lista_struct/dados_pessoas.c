#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	char nome[40];
	int documento;
	int idade;
	
}pessoa;

void imprimirdados(pessoa*registro);

void atl_idade(pessoa*registro);

void registrardados(pessoa*registo);

void maior_menor(pessoa*registro, int quant);

int main(void){
	
	int cont;
	int quant;
	pessoa *registro;
	
	printf("DIGITE A QUANTIDADE DE PESSOAS A SER CADASTRADA\n>> ");
	scanf("%d",&quant);
	
	registro=(pessoa*)malloc(quant*sizeof(pessoa));
	if(registro==NULL){
		printf("!!!ERRO DE MEMORIA!!!");
	}
	
	
	// registrar dados
	for(cont=0;cont<quant;cont++){
		registrardados(&registro[cont]);
	}
	
	// imprimir dados
	for(cont=0;cont<quant;cont++){
		imprimirdados(&registro[cont]);
	}
	system("pause");
	system("cls");
		
	// atualizar idade
	for(cont=0;cont<quant;cont++){
		atl_idade(&registro[cont]);
	}
	
	maior_menor(registro,quant);
	
	free(registro);
		
	return 0;
}

void maior_menor(pessoa*registro, int quant){
	
	int idade_maior=registro[0].idade;
	int idade_menor=registro[0].idade;
	int ind_maior=0;
	int ind_menor=0;
	int c;
	
	for(c+0;c<quant;c++){
		if(registro[c].idade>idade_maior){
			idade_maior=registro[c].idade;
			ind_maior=c;
		}
		if(registro[c].idade<idade_menor){
			idade_menor=registro[c].idade;
			ind_menor=c;
		}
	}
	
	printf("A PESSOA MAIS VELHA REGISTRADA:\n%s \n",registro[ind_maior].nome);
	printf("A PESSOA MAIS NOVA REGISTRADA:\n%s\n",registro[ind_menor].nome);
	
}

void registrardados(pessoa*registro){
	
	printf("INFORME SEU NOME\n>> ");
	scanf(" %[^\n]",registro->nome);
	
	printf("INFORME O NUMERO DO SEU DOCUMENTO\n>> ");
	scanf("%d",&registro->documento);
	
	printf("INFORME SUA IDADE\n>> ");
	scanf("%d",&registro->idade);
	
	system("cls");
}

void imprimirdados(pessoa*registro){
	
	printf("===================================\n");
	printf("NOME| %s\n",registro->nome);
	printf("NUMERO DO DOCUMENTO: %d\n",registro->documento);
	printf("IDADE: %d ANOS\n",registro->idade);
}

void atl_idade(pessoa*registro){
	
	int nova_idade;
	
	printf("ATUALIZAR A IDADE DE %s",registro->nome);
	printf("\nNOVA IDADE: ");
	scanf("%d",&nova_idade);
	registro->idade=nova_idade;
	system("cls");
	
}